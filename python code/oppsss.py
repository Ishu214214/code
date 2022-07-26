class student:
    a=5
    pass

ishu=student
kumar =student()

print( kumar)
print(ishu() )
ishu.name='ishu kumar'
print(ishu.name)

print('.................................................')

print('class',student.a)
print('obj',ishu.a)


student.a=6
print('class update', student.a)

print('.................................................')
print(ishu.__dict__)

