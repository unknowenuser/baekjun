class pascal:
    def combination(self,a,b):
        result = 1
        b -= 1
        if b*2 > a:
            b = a - b - 1
        for i in range(b):
            result *= (a - i - 1)
        for i in range(b):
            result = result // (i + 1)
        return result
    
    def __init__(self,a,b):
        self.num = self.combination(a,b)
    def print(self):
        print(self.num)
a,b = map(int,input().split())
num = pascal(a,b)
num.print()