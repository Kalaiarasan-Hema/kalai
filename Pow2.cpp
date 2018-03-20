#include <iostream>
#include <string>
using namespace std;
class Pow2
{
int n,i=1;
bool ch;
void get()
{
cout<<"Input"<<endl;
cin>>n;
if(n==1)
{
ch=true;
}
}
void chck()
{
while(i<n)
{
i=i*2;
if(i==n)
{
ch=true;
}
}
}
void disp()
{
cout<<"Output"<<endl;
if(ch)
{
cout<<"yes";
}
else
{
cout<<"no";
}
}
public:
Pow2()
{
get();
chck();
disp();
}
};
int main()
{
Pow2 p;
return 0;
}
