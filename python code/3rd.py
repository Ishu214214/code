s=set()
print(type(set()))
s.add(1)
s.add(2)
print(s)

#set tuple or list ki syntex ki help sa likh ta ha or result dictionary ki {} ma aata ha

l=[1,2,3]
b=[1,2,3]
s1=set(l)
print(s1)

s2=set([4,5,6])
print(s2)


s3=s2.union({6,5,9})

#s3=set( [(l),(b)] )
print(s3)


s3=s.union({6,5,4})
print(s3)


print(s.isdisjoint(s3))
