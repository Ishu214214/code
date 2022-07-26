l1=[ "2" , "3" , "4" , "5" , "6" , "7" ,"8" ]

print(type(l1))
print(l1)

sqr=list(map(lambda x: x*x, map(int,l1)))
print(sqr)


b=[1,2,3,4,5,6,7,8]
c=map(int,b)
d=5
def squarws(a):
    
    return a*a

def cueaws(a):
    return a*a*a

funt=[ squarws , cueaws ]

sqrt=list(  map( lambda x: x(d)  , funt ))
print(sqrt)

print('.........................................')

# reduce function
from functools import reduce
b=[1,2,3,4,5,6,7]

num=reduce( lambda x,y: x+y ,b)
print(num)

num=reduce( lambda x,y: x*y ,b)
print(num)

num=reduce( lambda x,y: x+x ,b)
print(num)

