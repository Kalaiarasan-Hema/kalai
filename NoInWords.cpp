#include <iostream>
#include <string>
using namespace std;
class NoInWords
{
int n;
void get()
{
cout<<"INPUT"<<endl;
cin>>n;
if(n>10)
{get();}
if(n<0)
{get();}
}
void prnt()
{
cout<<"OUTPUT"<<endl;
switch(n)
{
case 1:cout<<"One"<<endl;break;
case 2:cout<<"Two"<<endl;break;
case 3:cout<<"Three"<<endl;break;
case 4:cout<<"Four"<<endl;break;
case 5:cout<<"Five"<<endl;break;
case 6:cout<<"Six"<<endl;break;
case 7:cout<<"Seven"<<endl;break;
case 8:cout<<"Eight"<<endl;break;
case 9:cout<<"Nine"<<endl;break;
case 10:cout<<"Ten"<<endl;break;
}
}
public:
NoInWords()
{get();
prnt();}
};
int main()
{
NoInWords n;
return 0;
}
