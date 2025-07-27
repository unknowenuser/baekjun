def finder(l,r,k):
    t = k*(k-1)//2
    max_d = (2 * (r - l)) // (k * (k - 1)) + 2
    result = set()
    for i in range(1,max_d):
        max_x = ((r - i*t) // k) + 1
        for j in range(1,max_x):
            s = i*t + j*k
            if s > r:
                break
            if s >= l and s <= r:
                result.add(s)

    return len(result)

l = int(input())
r = int(input())
k = int(input())
print(finder(l,r,k))