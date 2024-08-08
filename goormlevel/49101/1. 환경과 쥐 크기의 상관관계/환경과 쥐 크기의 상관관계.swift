let n = Int(readLine()!)
var A = readLine()!
        .split(separator: " ")
        .map { Int($0)! }
A.sort()
var B = readLine()!
        .split(separator: " ")
        .map{ Int($0)! }
B.sort()

var aDict: [Int: Int] = [:]
var bDict: [Int: Int] = [:]

A.forEach {
	aDict[$0, default: 0] += 1
}

B.forEach {
	bDict[$0, default: 0] += 1
}

var maxA = 0
var maxB = 0
var ax = 0
var bx = 0

for i in A.first!...A.last! {
	var cnt = 0
	for j in i-2...i+2 {
		cnt += aDict[j, default: 0]
	}
	if cnt > maxA {
		maxA = cnt
		ax = i
	}
}

for i in B.first!...B.last! {
	var cnt = 0
	for j in i-2...i+2 {
		cnt += bDict[j, default: 0]
	}
	if cnt > maxB {
		maxB = cnt
		bx = i
	}
}

print(ax, bx)
if ax > bx { print("good") }
else { print("bad") }


