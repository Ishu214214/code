#include <iostream>  
using namespace std;  

int main ()
{
for (int &x :vet)
{
  x=x+5;
}
for(int x :vet)
{
  cout<<"\n"<<x;
}
    return 0;  
}  