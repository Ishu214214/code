# class Student1:
#     name="ishu"
#     branch="cs"
#     roll=1

#     def printdetail(self):
#         print(f"name {self.name} & branch {self.branch} & id is {self.roll}")
    
#     # def details1()

# ishu=Student1()

# print(ishu.printdetail())


print('.................................')

class Student2:

    def printdetail(self):
        print(f"name {self.name} & branch {self.branch} & id is {self.roll}")
    

    def __init__(self,names,branchs,rolls):
        self.name=names
        self.branch=branchs
        self.roll=rolls

# in the object of ishu_k we passing the argument

ishu_k=Student2('ishu kumar' , 'cs', 2)
ishu_k.printdetail()
