//arthmatice-and-stream-operstor 
#include <iostream>

using namespace std;
class compl
{
    public:
    float img;
    float real;
    compl()
    {
        img=1;
        real=1;
    }
    ~compl()
    {
        cout<<"\nhelo";
    }

  friend ostream & operator << (ostream & oclass,compl c3)
    {
        oclass<<c3.real;
          oclass<<c3.img;
          return oclass;
    }     
       
    compl operator + (const compl &c2)
    {
        compl c3;
        c3.img= img + c2.img;
         c3.real= real + c2.real;
         return c3;
    }
};

 
        
    
int main()
{
compl x,y,z;

z=x+y;
cout<<"\n"<<"hi"<<z;


    return 0;
}  