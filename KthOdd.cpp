#include <iostream>
#include <string>
using namespace std;
class KthOdd
{
int c=0,n,k,ar[1000],ar2[1000],i;
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
if((ar[i]%2))
{ar2[c]=ar[i];
c++;}
}
cout<<"Output\n"<<ar2[k-1];
}
public:
KthOdd()
{
get();
find();
}
};
int main()
{
KthOdd k;
return 0;
}
