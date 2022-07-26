//file_handaling
#include<iostream>
#include<fstream>
using nsmespace std;
int main()
{
    char data[100];

    ofstream outfile;
    outfile.open("aa.txt",ios::out | ios::app)
    cout<<"\nenter the detail\n";
    cin.getline(data,100);
    outfile>>data;
    outfile.close();

    ifstream infile;
    infile.open("aa.txt",ios::in)
    cout("\nreading the data \n");
    infile>>data;
    cout<<"\n"<<data;
    return 0;
}