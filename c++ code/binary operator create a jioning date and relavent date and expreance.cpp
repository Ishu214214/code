// using binary operator of arthmatiatic notation to create a program of a person of joining the date and reaviling the date and expiance year

#include<iostream.h>
//using namespace std;
class person 
{
    public :
    int date;
    int months;
    int year;
    void getdata();
    void display();
     person operator + (const person &m);   //binary operator
    person();
    ~person();

};
void person::getdata()
{
    cout<<"\n enter the dd/mm/yy one by one";
    cin>>date>>months>>year;
}
  void person:: display()
  {
      cout<<"\n"<<date<<"\n"<<months<<"\n"<<year;
  }
  person::person()
  {
      date=0;
      months=0;
      year=0;
  }
  person::~person()
  {
      cout<<"\n kill the memory";
  }
person person :: operator + (const person &m)
{
    person d;
    d.date =( ( (30-date) +m.date ) /30)/12 ;
    d.months = ( (12-months) +m.months )/12;
    d.year = m.year - year;
    d.year=d.date + d.months + d.year ;
    return d;
}
int main()
{
    person x,y,z;
    x.getdata();
     y.getdata();
    z=x+y;
    z.display();
    return 0;
}