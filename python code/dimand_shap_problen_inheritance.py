#mapping function and over oding

class Student2:
    
    def printdetail(self):
        print(f"name {self.name} & branch {self.branch} & id is {self.roll}")
    

    def __init__(self,names,rolls,branchs):
        self.name=names
        self.roll=rolls
        self.branch=branchs
        #print(f"name {self.name} & branch {self.branch} & id is {self.roll}")


    def __add__(self,other):
        return (self.roll + other.roll)

    def __truediv__(self,other)    :
        return (self.roll / other.roll)

    def __repr__(self):
        return (f"name {self.name} & branch {self.branch} & id is {self.roll}")
    






a=Student2('ishu',33,'ffff')
b=Student2('ishugg',3453,'ffff')

print(a + b)
print(b / a)


print(a)

