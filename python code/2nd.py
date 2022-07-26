i=[2,5,3,8,33]
print(i[-1:-10:-1])
i.sort()
print(i) 
i.reverse()
print(i)

print('...............................................')

#dictonary key value

d1 = {       'ishu':'kumsr',
 'a':1  ,
 'b':{'ishu':'kumsrwww' }   
  }
print(d1)
print(d1['b'])
print(d1["ishu"])
print(d1['''a'''])
   #text in python with out comment
('.........gggggggggfff.......')
print('...............................................')

c1={'ishu':'kumar'}
c1['a']='a1'
c1[11]='ww'
c1[22]=22
print(c1)
del c1[22]
print(c1)

#copy c1 to c2 
c2=c1.copy()
del c2[11]
print(c1)
print(c1.keys())
print(c1.items())

