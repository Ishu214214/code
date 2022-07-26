def gen(n):
    for i in range(n):
        yield i

a=gen(3)
b=gen(3)

print(a.__next__())
print(a.__next__())
print(a.__next__())

for i in b:
    print(i)

h='ishu'    
ite=iter(h)
print(ite.__next__())

