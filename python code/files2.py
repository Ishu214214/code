#write mode will create the file 
#a=open('kumar.txt','w')

#now we are give input to the file for append mode
a=open('kumar.txt','a')
a.write('this is my  2nd file in python \n')
#print no of character
print(a)

a.close()

print('........................')
a1=open('kumar.txt','r+')
a11=a1.read()
print('........................')
print(a11)
a1.write('thank you\n')
a.close()
print('........................')