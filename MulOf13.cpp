#include <iostream>
using namespace std;
class MulOf13
{
int n;
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
if(n%13==0)
{
cout<<"yes"<<endl;
}
else
{
cout<<"no"<<endl;
}
}
};
int main()
{
MulOf13 n;
n.get();
n.chck();
return 0;
}
