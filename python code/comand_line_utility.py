import argparse
import sys

def cal(b):
    try:
        if b.o=="add":
            return b.x +b.y
        elif b.o=="mul":
            return b.x *b.y
        elif b.o=="div":
            return b.x /b.y
        elif b.o=="sub":
            return b.x - b.y
        elif b.o=="sqr":
            return b.x * b.x    
        else:
            return Exception()

    except Exception as e:
        print("first condiction will not work /n")    

def fun(c):
    if c.o=="sqr":
        return c.x * c.x

if __name__ == '__main__':
    a=argparse.ArgumentParser()

    a.add_argument('--x' , type=float ,default=10 ,
                    help="i am hear to help u")

    a.add_argument('--y' , type=float ,default=10 ,
                    help="i am hear to help u")

    a.add_argument('--o' , type=str ,default="add" ,
                    help="i am hear to help u")


    b=a.parse_args()   
    sys.stdout.write(str(cal(b)))

    c=a.parse_args()   
    sys.stdout.write(str(fun(c)))
      

