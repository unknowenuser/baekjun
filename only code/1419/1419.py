import sys
def finder(l,r,k):
    t = k*(k-1)//2
    max_d = (r - k) // t + 1
    result = set()
    for i in range(1,max_d):
        max_x = ((r - i * t) // k)
        min_x = ((l - i * t + k - 1) // k)
        for j in range(max(min_x,1),max_x):
            s = i * t + j * k
            if s > r:
                break
            if s >= l and s <= r:
                result.add(s)
    return len(result)

l, r, k = map(int, [sys.stdin.readline() for _ in range(3)])
print(finder(l,r,k))