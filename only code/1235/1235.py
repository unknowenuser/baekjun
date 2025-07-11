def get_data(): #데이터를 입력받는 함수
    result = []
    for i in range(int(input())):
        result.append(input())
    return result
def find_minimum(data): #구분가능한 최소 자릿수 찾는 알고리즘
    i = len(str(len(data))) * -1 #구분해야하는 사람수의 자리수 * -1 
    while True:
        sliced_list = []
        for j in data:
            sliced_list.append(j[i:])
        if len(set(sliced_list)) == len(sliced_list):
            break
        i -= 1
    return i * -1
data = get_data()
print(find_minimum(data))