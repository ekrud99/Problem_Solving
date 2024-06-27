import Foundation

func makeNString(_ num: Int, _ base: [String]) -> String {
    var num = num
    var answer = ""
    var idx = 0
    
    while num / base.count > 0 {
        idx = num % base.count
        answer = base[idx] + answer
        num /= base.count
    }
    
    answer = base[num] + answer
    
    return answer
}

func solution(_ n:Int, _ t:Int, _ m:Int, _ p:Int) -> String {
    var base = "0123456789ABCDEF".map { String($0) }
    base = Array(base[0..<n])
    var answer = ""
    var result = ""
    var resultCount = 0
    var answerCount = 0
    var num = 0
    var idx = p - 1
    
    while answerCount < t * m {
        let tmp = makeNString(num, base)
        answer += tmp
        answerCount += tmp.count
        num += 1
    } 
    
    var answerArr = answer
        .map { String($0) }
        
    while resultCount < t {
        result += answerArr[idx]
        resultCount += 1
        idx += m
    }
    
    return result
}