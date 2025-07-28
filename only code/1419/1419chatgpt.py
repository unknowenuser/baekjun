#틀렸음
import sys
def finder(l, r, k):
    t = k * (k - 1) // 2
    count = 0
    max_d = (r - l) // t + 1  # 가능한 d의 최대값
    for d in range(1, max_d):
        offset = d * t
        # s = kx + offset → s ≡ offset (mod k)
        # 즉, s는 offset을 k로 나눈 나머지를 가져야 함
        min_s = ((l - offset + k - 1) // k) * k + offset % k
        if min_s < l:
            min_s += k
        max_s = ((r - offset) // k) * k + offset % k
        if min_s > max_s:
            continue
        cnt = (max_s - min_s) // k + 1
        count += cnt
    return count

l, r, k = map(int, [sys.stdin.readline() for _ in range(3)])
print(finder(l, r, k))
