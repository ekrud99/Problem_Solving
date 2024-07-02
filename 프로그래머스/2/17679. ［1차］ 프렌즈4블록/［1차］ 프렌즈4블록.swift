struct Pos: Hashable {
    var i: Int
    var j: Int
}

func find4(_ i: Int, _ j: Int, _ board: [[String]]) -> Bool {
    let block = board[i][j]
    if block == "*" { return false }
    if board[i + 1][j] == block && board[i + 1][j + 1] == block && board[i][j + 1] == block { return true }
    return false
}

func calcPoint(_ pos: [Pos], _ board: inout [[String]], _ set: inout Set<Pos>) -> Int {
    var res = 0
    
    for p in pos {
        set.insert(Pos(i: p.i, j: p.j))
        set.insert(Pos(i: p.i, j: p.j + 1))
        set.insert(Pos(i: p.i + 1, j: p.j))
        set.insert(Pos(i: p.i + 1, j: p.j + 1))
        board[p.i][p.j] = "*"
        board[p.i][p.j + 1] = "*"
        board[p.i + 1][p.j] = "*"
        board[p.i + 1][p.j + 1] = "*"
    }
    return set.count
}

func moveBlock(_ m: Int, _ n: Int, _ board: inout [[String]]) {
    for i in (0..<m).reversed() {
        for j in 0..<n {
            if board[i][j] == "*" {
                var idx = i - 1
                while idx >= 0  {
                    if board[idx][j] != "*" {
                        board[i][j] = board[idx][j]
                        board[idx][j] = "*"
                        break
                    }
                    idx -= 1
                }
            }
        }
    }
}

func solution(_ m:Int, _ n:Int, _ board:[String]) -> Int {
    var fBoard = [[String]](repeating: [], count: m)
    var pos: [Pos] = []
    var set: Set<Pos> = []
    var res = 0
    
    for i in 0..<board.count {
        let arr = board[i].map { String($0) }
        fBoard[i] += arr
    }
    
    while true {
        for i in 0..<m - 1 {
            for j in 0..<n - 1 {
                if find4(i, j, fBoard) { pos.append(Pos(i: i, j: j)) }
            }
        }
        if pos.isEmpty { break }
        
        res += calcPoint(pos, &fBoard, &set)
        moveBlock(m, n, &fBoard)
        set.removeAll()
        pos.removeAll()
    }
    
    return res
}