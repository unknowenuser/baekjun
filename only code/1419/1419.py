def finder(l,r,k):
    t = k*(k-1)/2
    max_d = (2 * (r - l)) // (k * (k - 1)) + 1
    min_d = (2 * (l - k)) // (k * (k - 1)) + 1
    max_x = (((r - k) * (k - 1)) // 2) // k
    min_x = (((l - k) * (k - 1)) // 2) // k
    result = set()
    for i in range(max(min_d,1),max_d):
        for j in range(max(1,min_x),max_x):
            s = i*t + j*k
            if s >= l and s <= r:
                result.add(s)

    return len(result)

l = int(input())
r = int(input())
k = int(input())
print(finder(l,r,k))