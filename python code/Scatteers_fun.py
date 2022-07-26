class a:
    def __init__(self,fname,lname):
        self.fname=fname
        self.lname=lname
        self.emails= f"first {fname}  name is {lname}@gmail"

    def explain(self):
        return f"first name is {self.fname} last name is {self.lname}"

    @property
    def email(self):
        print('email function call')
        return f"first name of email is {self.fname} last name is {self.lname}@gmail.com"

    @email.setter
    def email(self,string):
        print('setting now')
        namess=string.split('@')[0]
        self.ffname=namess.split('is')[0]
        self.llname=namess.split('.')[1]


aa=a('ishu','kumar')

print(aa.explain())
print(aa.email)

aa.fname="isssss"
aa.email='this kumar .is ishu kuma @gmail.com'
#print(aa.email)
