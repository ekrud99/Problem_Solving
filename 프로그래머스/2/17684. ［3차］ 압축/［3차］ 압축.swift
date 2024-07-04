var dict = [
        "A": 1,
        "B": 2,
        "C": 3,
        "D": 4,
        "E": 5,
        "F": 6,
        "G": 7, 
        "H": 8, 
        "I": 9, 
        "J": 10,
        "K": 11,
        "L": 12, 
        "M": 13, 
        "N": 14, 
        "O": 15, 
        "P": 16, 
        "Q": 17, 
        "R": 18, 
        "S": 19, 
        "T": 20, 
        "U": 21, 
        "V": 22, 
        "W": 23, 
        "X": 24, 
        "Y": 25, 
        "Z": 26
    ]

func solution(_ msg:String) -> [Int] {
    let msgString = msg.compactMap { String($0) }
    var result: [Int] = []
    var index = 27
    var i = 0
    var cur = msgString[i]
    
    while i < msgString.count - 1 {
        let next = cur + msgString[i + 1]
        
        if dict[next] == nil {
            result.append(dict[cur]!)
            dict[next] = index
            index += 1
            cur = ""
        }
        cur += msgString[i + 1]
        i += 1
    }
    
    result.append(dict[cur]!)
    
    return result
}