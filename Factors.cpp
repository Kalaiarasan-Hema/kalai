#include <iostream>
using namespace std;
class Factors
{
int n,i=0;
public:
void get()
{
cout<<"INPUT"<<endl;
	cin>>n;
	if(n>1000){get();}
	}
void chck()
{
cout<<"OUTPUT"<<endl;
for(i=1;i<=n;i++)
{
if(n%i==0)
{
cout<<i<<" ";
}
}
}
};
int main()
{
Factors n;
n.get();
n.chck();
return 0;
}
