pointer = dict()
for i in range(int(input())):
    a = int(input())
    pointer[i] = a - 1
who = list()
for i in range(len(pointer)):
    temp = list()
    num = pointer[i]
    temp.append(i)
    while (num  not in temp):
        temp.append(num)
        num = pointer[num]
    who.append(temp)
biggest = 0
index = 0
for i in range(len(who)):
    if len(who[i]) > biggest:
        biggest = len(who[i])
        index = i
print(index+1)