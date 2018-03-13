#include <iostream>
using namespace std;
class IfExist
{
int n,k,i,c=0,ar[1000];
public:
void get()
{
cout<<"INPUT"<<endl;
cin>>n>>k;
for(i=0;i<n;i++)
{
cin>>ar[i];
}
}
void check()
{
for(i=0;i<n;i++)
{
if(k==ar[i])
{
c++;
}
}
}
void display()
{
cout<<"OUTPUT"<<endl;
if(c==0)
{cout<<"no";}
else
{cout<<"yes";}
}
};
int main()
{
IfExist nr;
nr.get();
nr.check();
nr.display();
return 0;
}
