#include <iostream>
using namespace std;
class InInterval
{
int n,r,l,j;
public:
InInterval()
{
get();
display();
}
void get()
{
cout<<"INPUT"<<endl;
cin>>n>>l>>r;
if(l>r)
{
int t=l;
l=r;
r=t;
}
}
bool chck()
{
for(j=l+1;j<r;j++)
{
if(j==n)
{return true;}
}
return false;
}
void display()
{
cout<<"OUTPUT"<<endl;
if(chck())
{cout<<"yes";}
else
{cout<<"no";}
}
};
int main()
{
InInterval ip;
return 0;
}
