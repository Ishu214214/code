#include<iostream>
using namespace std;
template<class T1 ,class T2>
T1 add(T1 m, T2 n)
{
    T1 o;
    o=m+n;
    return o;
}
int main()
{
     int  x,y,z;
     float f1,f2,f3;
     double d1,d2,d3;
     cin>>x>>y>>f1>>f2>>d1>>d2;
     z=add(x,f1);
     f3=add(f1,d2);
     //d3=add(d1,y);
     d3==add(d1,y);
     cout<<"\n"<<z<<"\n"<<f3<<"\n"<<d3;
    return 0;
}