#include <iostream>
#include <string>
using namespace std;
class KthSmall
{
int j=0,n,k,ar[1000],i;
void get()
{
cout<<"Input"<<endl;
cin>>n;
cin>>k;
for(i=0;i<n;i++)
{cin>>ar[i];}
}
void find()
{
for(i=0;i<n;i++)
{
for(i=0;i<n;i++)
    {
    for(j=i;j<n;j++)
    {
    if(ar[i]<ar[j])
    {
    int t=ar[i];
    ar[i]=ar[j];
    ar[j]=t;
    }
    }
    }
}
}
void display()
{cout<<"Output\n"<<ar[n-k];}
public:
KthSmall()
{
get();
find();
display();
}
};
int main()
{
KthSmall k;
return 0;
}
