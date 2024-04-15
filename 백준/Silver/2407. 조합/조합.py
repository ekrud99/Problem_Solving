def ncm(n):
    a = 1
    for i in range(2, n + 1):
        a *= i
    return a

n,m = map(int,input().split())
print(ncm(n) // (ncm(m) * ncm(n - m)))