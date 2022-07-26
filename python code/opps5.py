class Student2:
    change_leave=8
    #procted varibal start with _
    _procted=85
    #private varibal start with __
    __privates=94
    def printdetail(self):
        print(f"name {self.name} & branch {self.branch} & id is {self.roll}")
    
    #constructor
    def __init__(self,names,branchs,rolls):
        self.name=names
        self.branch=branchs
        self.roll=rolls

    @staticmethod
    def printgoods(string):
       print("this is me " + string)
       return "Not show none becouse return value is there"

    @classmethod
    def change_leaves(cls, newleave):
        cls.change_leave=newleave  

    @classmethod
    def from_str(cls,string):
        a=string.split("-") 
        return (a[0], a[1] , a[2])

#obj of class 2
obj2 = Student2.from_str("Ishu-CS-3")

obj2_1=Student2('ishu kumar' , 'cs', 'three')
#print procted varibal
print(obj2_1._procted)

#print private varibal
print(obj2_1._Student2__privates)

#for printing class 2
#print(obj2_1.printgoods('hi'))

class Student3(Student2):
    pass

#obj of class 3
obj3=Student3('ishu kumar' , 'cs', 'three')


class Student4(Student3):
    class Student5:
        def pri(string):
            print('nestedded loop')
            return ('end nested loop')
    obj5=Student5()
    
    print(obj5.pri())
    


#obj of class 4
obj4=Student4('ishu kumar' , 'cs', 'three')

#staticties methods
#for printing class 4
#print(obj4.printgoods('hi'))
#print(obj4.obj5.pri())

class Student6( Student4 , Student2 ):
    pass

#obj of class 6
obj6=Student6('ishu kumar' , 'cs', 'three')

print(obj6.obj5.pri())

