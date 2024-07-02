func solution(_ str1:String, _ str2:String) -> Int {
    var str1Arr = str1.compactMap { String($0).uppercased() }
    var str2Arr = str2.compactMap { String($0).uppercased() }

    var str1Set: [String] = []
    var str2Set: [String] = []
    var str1Dict: [String: Int] = [:]
    var str2Dict: [String: Int] = [:]
    var unionSet: [String] = []
    var interSet: [String] = []
    var union = 0
    var inter = 0
    
    for i in 0..<str1Arr.count - 1 {
        var strCandidate = str1Arr[i] + str1Arr[i + 1]
        if Character(str1Arr[i]).isLetter && Character(str1Arr[i + 1]).isLetter {
            str1Set.append(strCandidate) 
            str1Dict[strCandidate, default: 0] += 1
        }
    }
    
    for i in 0..<str2Arr.count - 1 {
        var strCandidate = str2Arr[i] + str2Arr[i + 1]
        if Character(str2Arr[i]).isLetter && Character(str2Arr[i + 1]).isLetter {
            str2Set.append(strCandidate) 
            str2Dict[strCandidate, default: 0] += 1
        }
    }
    
    
    // 합집합
    for (key, value) in str1Dict {
        let ma = max(value, str2Dict[key, default: 0])
        unionSet += Array(repeating: key, count: ma)
    }
    
    for (key, value) in str2Dict {
        if str1Dict[key] == nil { unionSet += Array(repeating: key, count: value) }
    }
    
    //교집합
    for (key, value) in str1Dict {
        if str2Dict[key] != nil {
            let mi = min(value, str2Dict[key]!)
            interSet += Array(repeating: key, count: mi)
        }
    }
    
    var res = Double(interSet.count) / Double(unionSet.count)
    
    if unionSet.count == 0 && interSet.count == 0 {
        return 65536
    }
    
    return Int(res * 65536)
}

