
#include<iostream>
using namespace std;  
 class complex   //creating the complex number
{
 public:
   
 void getdata();   // member function
 void display();

    class hello
    {
        public:
         float real;
         
         float img;  
         
         void get()
         {
             cout<<"\n enter real";
             cin>>real>>img;
            
         }
         void displ()
         {
            cout<<"\n display"<<real<<img;
            
         }
         hello operator + (const hello &c2);
         hello::hello()
         {
        img =0.0;
        real=0.0;  
        
         }
    };                 
};

 complex ::hello complex ::hello:: operator + (const hello &c2)
{
hello c1,c3;
c3.img= c2.img + img ;       
c3.real= c2.real + real;

return c3; 
}                   
int main()
{
    complex :: hello x,y,z;            //x,y,z are argument of c1,c2,c3
    
    x.get();
     y.get();
             z=x+y; 
                           
     z.displ();
     return 0;
}
