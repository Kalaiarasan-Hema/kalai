#include <iostream>
using namespace std;
class OddNumber
{
int n,s,i=0,j=0,ar[5];
public:
void get()
{
cout<<"INPUT"<<endl;
cin>>n;
}
void chck()
{
cout<<"OUTPUT"<<endl;
s=n;
while(s%10!=0)
{
i++;
s=s/10;
}
s=n;
while(s%10)
{
ar[j]=s%10;
s=s/10;
j++;
}
i--;
for(int j=i;j>=0;j--)
{
if((ar[j]%2))
{
cout<<ar[j]<<" ";
}
}
}
};
int main()
{
OddNumber n;
n.get();
n.chck();
return 0;
}
