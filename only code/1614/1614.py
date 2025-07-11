finger_num = int(input())
countable = int(input())
if finger_num != 1 and finger_num != 5:
    count = (countable//2) * 8
    if countable %2 == 1:
        count = count + 9 -finger_num
    else:
        count = count + finger_num - 1
else:
    count = countable * 8 + finger_num - 1
    countable = 0
print(count)