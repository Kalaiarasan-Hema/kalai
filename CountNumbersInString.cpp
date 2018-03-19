#include <stdio.h>
#include <iostream>
using namespace std;
class CountNumbersInString
{
int n,i,a=0;
string s;
void get()
{
    cout<<"INPUT"<<endl;
    getline(cin,s);
}
void count()
{
    n=s.length();
    for(i=0;i<n;i++)
    {
    switch(s[i])
    {
    case '1':a++;break;
    case '2':a++;break;
    case '3':a++;break;
    case '4':a++;break;
    case '5':a++;break;
    case '6':a++;break;
    case '7':a++;break;
    case '8':a++;break;
    case '9':a++;break;
    case '0':a++;break;
    }
    }
}
void display()
{ 
cout<<"OUTPUT"<<endl<<a;
}
public:
CountNumbersInString()
{
    get();
    count();
    display();
}
};
int main()
{
CountNumbersInString cn;
return 0;
}
