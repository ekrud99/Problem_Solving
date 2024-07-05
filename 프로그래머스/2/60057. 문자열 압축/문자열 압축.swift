import Foundation

func compress(_ str: String, _ unit: Int) -> Int {
    var compStr = str
    var compList: [String] = []
    var result = ""
    
    while true {
        if compStr == "" { break }
        if compStr.count < unit {
            compList.append(compStr)
            break
        }
        var str = compStr.prefix(unit)
        compList.append(String(str))
        compStr = String(compStr.suffix(compStr.count - unit))
    }
    
    var cnt = 1
    var l = 0
    var r = 1
    
    while r < compList.count {
        if compList[l] == compList[r] {
            cnt += 1
            r += 1
        } 
        else {
            if cnt > 1 { result += String(cnt) + compList[l] }
            else { result += compList[l] }
            l = r
            r += 1
            cnt = 1
        }
    }
    
    if cnt != 1 { result += String(cnt) + compList[l] } 
    else { result += compList[r - 1] }
    
    return result.count
}

func solution(_ s:String) -> Int {
    let strList = s.compactMap { String($0) }
    var mi = s.count * 2
    
    if s.count == 1 { return 1 }
    
    for i in 1..<s.count {
        let len = compress(s, i)
        if mi > len { mi = len }
    }
    
    return mi
}
