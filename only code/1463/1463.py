n = int(input())
n_list = [0,0]
for i in range(2,n + 1):
    n_list.append(n_list[i-1] + 1)
    if i % 3 == 0:
        n_list[i] = min(n_list[i],n_list[int(i/3)] + 1)
    if i % 2 == 0:
        n_list[i] = min(n_list[i],n_list[int(i/2)] + 1)
print(n_list[n])