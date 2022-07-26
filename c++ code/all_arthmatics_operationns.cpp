//we are creating the binary operator using operator overloding
#include<iostream.h>  
#include<iostream>   //header file of input and out stream
//#include <bar>
using namespace std;        //using name space libary file   
class complex   //creating the complex number
{
 public:
 float img;     //data member
 float real;          
 void getdata();   // member function
 void display();
 complex();        //constructor
 ~complex();        //distructor
 complex operator + (const complex &c2);   //operator overloding   //operator function  //operator symbol
                     //just like copy constructor   //operator keyword
 complex operator - (const complex &c2);
 complex operator * (const complex &c2);
 complex operator / (const complex &c2);                    
};
complex::complex()
    {
        img =0.0;
        real=0.0;    //insilise the value of data member to delate the garbage value
    }
complex::~complex()
{ 
    cout<<"\n constructor call hear to kill the required storage in memory\n";
}    
void complex::getdata()
{
 cout<<"\n enetr the data";  //input the data from user
  cin>>img>>real;           
}
void complex::display()
{
    cout<<img<<"\n"<<real;    //disply the data
}
complex complex:: operator + (const complex &c2)
{
complex c1,c3;
c3.img= c2.img + img ;       //hera c3 is decleare and c2 are argument value and imd is c1 becoust it is member of class of complex
c3.real= c2.real + real;
return c3;                     //returing the value just like adding function we are returing the value on add two number
}

complex operator - (const complex &c2)     //just like additioin we are doing subtract
{
    complex c3;
    c3.img= img - c2.img;
    c3.real= real - c2.real;
    return c3;
}
complex operator * (const complex &c2) //just like additioin we are doing multipliy
{
    complex c3;
    c3.img= img * c2.img;
    c3.real= real * c2.real;
    return c3;
}
complex operator / (const complex &c2) //just like additioin we are doing divide
{
    complex c3;
    c3.img= img / c2.img;
    c3.real= real / c2.real;
    return c3;
}
int main()
{
    complex x,y,z;            //x,y,z are argument of c1,c2,c3
    x.getdata();
    y.getdata();            //taking the x and y vale of real and imaginary part
   // x.display();         //display the x and y vale of real and imaginary part
  //  y.display();

    z=x+y;                //    adding the two complex number that is not possible in normal additional 
    z.display();
    z=x-y;
    z.display();
    z=x * y;
    z.display();
    z=x/y;
    z.display();
    

    return 0;
}