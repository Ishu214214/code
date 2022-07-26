#java script object notation (json)

# import json

# var ='{"ishu":1,"kumar":"2" }'   

# print(var)
# a=json.loads(var)

# print(a['ishu'])

# b=json.dumps(a)

# print(b)

# #pikel

import pickle

# c=['AUDI' , 'BMW' , 'HONDA','ROLS ROYAL']

d='MYCAR.pkl'

# fileobj=open(d,'wb')
# pickle.dump(c,fileobj)
# fileobj.close()

fileobj=open(d,'rb')
f=pickle.load(fileobj)
print(f[0])
