from abc import ABCMeta, abstractmethod

class shape(metaclass=ABCMeta):
    @abstractmethod
    def area(self):
        return 0

class  rec(shape):

    def __init__(self):
        self.length=5
        self.withs=10


    def area(self):
        print(self.length*self.withs)


r=rec()        

r.area()