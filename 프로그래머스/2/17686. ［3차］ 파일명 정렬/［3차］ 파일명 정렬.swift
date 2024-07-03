struct FileName: Comparable {
    var head: String
    var number: Int
    var index: Int
    
    static func < (lhs: FileName, rhs: FileName) -> Bool {
        let head1 = lhs.head.lowercased()
        let head2 = rhs.head.lowercased()
        
        if head1 != head2 { return head1 < head2 }
        else if lhs.number != rhs.number { return lhs.number < rhs.number }
        else { return false }
        }
}

func solution(_ files:[String]) -> [String] {
    var fileNames: [FileName] = []
    var result: [String] = []
    
    for i in 0..<files.count {
        let fileString = files[i].compactMap { String($0) }
        var head = ""
        var number = ""
        var findHead = false
        var findNumber = false
        
        for letter in fileString {
            if Character(letter).isNumber { findHead = true }
            if findHead && !Character(letter).isNumber { findNumber = true }
            if !findHead { head += letter }
            if findHead && !findNumber { number += letter }
        }
        fileNames.append(FileName(head: head, number: Int(number)!, index: i))
    }
    
    fileNames.sort()
    
    for fileName in fileNames {
        result.append(files[fileName.index])
    }
    
    return result
}