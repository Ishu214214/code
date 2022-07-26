# enumarat function is used to slicinng to the list
l1=( 'ishu', 'hu', 'lu', 'kumar' , 'cs', 'piet' )

print(l1)
print(type(l1))

# some list item which is not printed we used enumarate function
l2=[ 'ishu', 'hu', 'lu', 'kumar' , 'cs', 'piet' ]

print(l2)
print(type(l2))

i=1
for item in l2:
    if i%2 is not  0:
        print(f"hello we are {item }")
    i=i+1

for index,item in enumerate(l1):
    if index%2==0:
        print(f'tuple {item}')