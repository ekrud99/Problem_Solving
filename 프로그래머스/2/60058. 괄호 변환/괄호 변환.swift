import Foundation

func isCorrectBracket(_ brackets: String) -> Bool {
    let bracketStr = brackets.compactMap { String($0) }
    var openCnt = 0
    var closeCnt = 0
    
    for bracket in bracketStr {
        if bracket == "(" { openCnt += 1 }
        else { closeCnt += 1 }
        
        if openCnt < closeCnt { return false }
    }
    
    return true
}

func isBalancedBracket(_ brackets: String) -> Bool {
    let bracketStr = brackets.compactMap { String($0) }
    var openCnt = 0
    var closeCnt = 0
    for bracket in bracketStr {
        if bracket == "(" { openCnt += 1 }
        else { closeCnt += 1 }
    }
    if openCnt == 0 && closeCnt == 0 { return false }
    if openCnt == closeCnt { return true }
    return false
}

func reversal(_ brackets: String) -> String {
    let bracketList = brackets.compactMap { String($0) }
    var result = ""
    
    for bracket in bracketList {
        if bracket == "(" { result += ")"}
        else { result += "("}
    }
    
    print("reversed bracket: \(result)")
    
    return result
}

func solution(_ p:String) -> String {
    var bracketStr = p.compactMap { String($0) }
    var result = ""
    var u = ""
    var v = ""
    var str = ""
    
    if p == "" { return "" }
    
    for bracket in bracketStr {
        if !isBalancedBracket(u) { u += bracket }
        else { v += bracket }
    }

    if isCorrectBracket(u) {
        result = u + solution(v)
    } else {
        str = "("
        str += solution(v)
        str += ")"
        
        u.removeFirst()
        u.removeLast()
        
        str += reversal(u)
        
        result = str
    }
    
    return result
}