#include <iostream.h>

class ishu
{
    public:
    int age,height,weight;
    void getdata();
    void display();
    ishu();
    ishu(int a, int h ,int w);
    ishu(const ishu & i);
    ~ishu();
};
void ishu::getdata()
{
    cout<<"enter the data";
    cin>>age>>height>>weight;
}
void ishu::display()
{
    cout<<age<<height<weight;
    //return 0;
}
ishu::ishu()
{
    age=0;
    height=0;
    weight=0;
}
ishu::ishu(int a,int h ,int w)
{
    age=a;
    height=h;
    weight=w;
}
 ishu::ishu(const ishu & i)
{
    age=i.age;
    height=i.height;
    weight=i.weight;
}
 ishu::~ishu()
 {
     cout<<"hi";
 }
int main()
{
    ishu i1;
    ishu i2(12,11,13);
    ishu i3(i2);
    i1.display();
    i2.display();
    i3.display();
    return 0;
    
}