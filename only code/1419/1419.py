import sys
def finder(l,r,k):
    if k == 2:
        result = r - max(3,l) + 1
    elif k == 3:
        start = max(6,l)
        end = r
        result = end // 3 - (start + 2) // 3 + 1
    elif k == 4:
        start = max(14,l)
        end = r
        result = end // 2 - (start+1) // 2 + 1
        if l <= 10:
            result += 1
    elif k == 5:
        start = max(15,l)
        end = r
        result = end // 5 - (start + 4) // 5 + 1
    return max(0,result)
l, r, k = map(int, [sys.stdin.readline() for _ in range(3)])
print(finder(l,r,k))