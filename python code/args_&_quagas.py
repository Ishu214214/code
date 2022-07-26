def isss(normals,*argss,**kwargs):
    print(normals)

    for key,value in kwargs.items():
        print(key,value)



    for i in item:
        print(i)
    print(type(item))


item=['ishu','kumar','cs','piet']
normal=34
kw={ 'ishu':11 , 'kumar':22,'loda':33 }

isss(normal,*item,**kw)