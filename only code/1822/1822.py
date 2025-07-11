input()
setA = set(map(int,input().split())) #공백문자 기준으로 받은 값을 정수로 변환하고 리스트로 만듬
setB = set(map(int,input().split()))
dif_list = sorted(list(setA.difference(setB)))
print(len(dif_list))
print(*dif_list,sep=" ")