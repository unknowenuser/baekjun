finger_num = int(input())
countable = int(input())
count = 0
while countable !=0 :
    if (count//4)%2 == 0:
        if finger_num != 5:
            countable -= 1
        count += 4
    else :
        if finger_num != 1 :
            countable -= 1
        count += 4
if (count//4)%2 == 0:
    print(count + finger_num - 1)
else:
    print(count - finger_num + 5)