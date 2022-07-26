class Student2:
    change_leave=8
    
    def printdetail(self):
        print(f"name {self.name} & branch {self.branch} & id is {self.roll}")
    

    def __init__(self,names,branchs,rolls):
        self.name=names
        self.branch=branchs
        self.roll=rolls

    @classmethod
    def change_leaves(cls, newleave):
        cls.change_leave=newleave  

    @classmethod
    def from_str(cls,string):
        a=string.split("-") 
        return (a[0], a[1] , a[2])

    
print('.................................')

ishu_kumar = Student2.from_str("Ishu-CS-3")
print(ishu_kumar)
#ishu_kumar.printdetail()



