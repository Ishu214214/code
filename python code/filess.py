x=open('ishu.txt','rt')
a=x.read()
print(a)


print("......................")

x=open('ishu.txt','rt')
print(x.readline())
print(x.readline())
print(x.readline())


print("......................")


#x=open('ishu.txt','rt')

for i in open('ishu.txt','rt'):
    print(i)



print("......................")

 #  print text letter and i am inserty directely in the function

print(open('ishu.txt','rt').read(11))


print("......................")

print(x.readlines())
# tell fun tell line no
print(x.tell())
# seek function will start again from intexing given
x.seek(10)
print(x.readlines())
x.close()

print("......................")
x=open('ishu.txt','rt')

print(x.readlines())

x.close()

print("......................")
with open('ishu.txt','rt') as x:
    print(x.read(4))


