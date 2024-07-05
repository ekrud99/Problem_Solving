import Foundation

func solution(_ record:[String]) -> [String] {
    var userDict: [String: String] = [:]
    var result: [String] = []
    
    for info in record {
        let infoList = info
                        .split(separator: " ")
                        .compactMap { String($0) }
        let oper = infoList[0]
        let id = infoList[1]
        
        if oper != "Leave" {
            userDict[id] = infoList[2]
        }
    }
    
    for info in record {
        let infoList = info
                        .split(separator: " ")
                        .compactMap { String($0) }
        let oper = infoList[0]
        let id = infoList[1]
        
        if oper == "Enter" {
            result.append("\(userDict[id]!)님이 들어왔습니다.")
        } else if oper == "Leave" {
            result.append("\(userDict[id]!)님이 나갔습니다.")
        }
    }
    
    return result
}