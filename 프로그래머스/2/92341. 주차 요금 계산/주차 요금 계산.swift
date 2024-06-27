import Foundation

func convertMinute(_ inTime: String, _ outTime: String) -> Int {
    let inTimeStr = inTime.split(separator: ":")
                            .map { Int($0)! }
    let outTimeStr = outTime.split(separator: ":")
                            .map { Int($0)! }
    let hour = (outTimeStr[0] - inTimeStr[0]) * 60
    let minute = outTimeStr[1] - inTimeStr[1]
    let total = hour + minute
    
    return total
}

// 0 기본시간, 1 기본요금, 2 단위시간, 3 단위요금
func convertFee(_ minute: Int, _ fees: [Int]) -> Int {
    var total_minute = minute
    var fee = fees[1]
    
    if total_minute > fees[0] {
        total_minute -= fees[0]
        fee += total_minute / fees[2] * fees[3]
        if total_minute % fees[2] != 0 { fee += fees[3] }
    }
    
    return fee
}

func solution(_ fees:[Int], _ records:[String]) -> [Int] {
    var totalFees: [String: Int] = [:]
    var totalMinutes: [String : Int] = [:]
    var inArr: [String : String] = [:]
    var carSet: Set<String> = []
    
    for record in records {
        let recordArr = record
            .split(separator: " ")
            .map { String($0) }
        if recordArr[2] == "IN" {
            inArr[recordArr[1]] = recordArr[0] // key: 번호, value: 시간
            carSet.insert(recordArr[1])
        }
        else {
            if totalMinutes[recordArr[1]] != nil {
                totalMinutes[recordArr[1]]! += convertMinute(inArr[recordArr[1]]!, recordArr[0])
            } else {
                totalMinutes[recordArr[1]] = convertMinute(inArr[recordArr[1]]!, recordArr[0])
            }
            inArr[recordArr[1]] = "out"
            
        }
    }

    for car in carSet {
        if inArr[car] != "out" {
            if totalMinutes[car] != nil {
                totalMinutes[car]! += convertMinute(inArr[car]!, "23:59")
            } else {
                totalMinutes[car] = convertMinute(inArr[car]!, "23:59")
            }
            
        }
        totalFees[car] = convertFee(totalMinutes[car]!, fees)
    }
    
    let sortedFees = totalFees.keys.sorted()
    var answer: [Int] = []
    
    for key in sortedFees {
        answer.append(totalFees[key]!)
    }
    return answer
}