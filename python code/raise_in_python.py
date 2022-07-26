a=input()
b=int(input())

if a.isnumeric():
    raise Exception('number not allow')

print(a)    

if b==0:
    raise Exception('zero is not allow')

print(b)    