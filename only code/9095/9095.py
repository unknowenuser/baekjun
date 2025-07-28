def counter(n,counted):
    if n in counted:
        return counted[n]
    counted[n] = counter(n-1,counted) + counter(n-2,counted) + counter(n-3,counted)
    return counted[n]

counted = {0:1,1:1,2:2,3:4}
for i in range(int(input())):
    print(counter(int(input()),counted))