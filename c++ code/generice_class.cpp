//generice_class
#include<iostream>
#include <vector>
using namespace std;
template <class t>
class array
{
    public:
    t a[10];
    void getdata()
    {
     int i;
     for(i=0;i<10;i++)
       {
         cin>>a[i];
       }
    }
    void display()
    {
     int i;
    for(i=0;i<10;i++)
   {
       cout<<a[i];
   }
};  
  int main()  
{  
    array <int> d;  
    d.getdata();
    d.display();  
    return 0;  
}  