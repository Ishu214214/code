f1=open('ishu.txt')

try:
    f2=open('isg.txt')

except Exception as e:
    print(e)    


else:
    print('this is running only if exception is not running')


finally:
    print('exituded')    
    f1.close()

    