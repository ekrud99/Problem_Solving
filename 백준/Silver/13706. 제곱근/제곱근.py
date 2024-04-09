def ps(n):
    lo = 0
    hi = n + 1

    while lo + 1 < hi:
        mid = (lo + hi) // 2
        if mid * mid <= n:
            lo = mid
        else:
            hi = mid

    return lo

n = int(input())
res = ps(n)
print(res)