'''
a=5
_=6
print(_)
print(a)

#normal function we are using and some example we are 
#using
def functionss():
    print('\n hello \n')

ishu = functionss()

iss=functionss

del functionss

print(ishu)
print(iss())

def hee(fun):
    fun('\n this \n')

hee(print)

#decortor

'''

def ku(fun1,fun11):
    print(1)
    fun1()
    fun11()
    print(3)

def fun1():
    print(2)

def fun11():
    print(22)


fun1 =ku(fun1,fun11)





