import Foundation

func solution(_ s:String) -> [Int] { 
    var counter: [Int: Int] = [:]
    var result: [Int] = []
    
    let numbers = s
    .components(separatedBy: CharacterSet(charactersIn: "{} ,"))
    .filter { !$0.isEmpty }
    .compactMap { Int($0) }
    
    for number in numbers {
        counter[number, default: 0] += 1
    }

    let sortedCounter = counter.sorted { $0.value > $1.value }

    sortedCounter.forEach { key, value in 
        result.append(key)
    }

    return result
}