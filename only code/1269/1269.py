setA = set
setB = set
a,b = map(int,input().split())
setA = set(map(int,input().split()))
setB = set(map(int,input().split()))
print(len(setA^setB))