#include <iostream>
using namespace std;
class Prime
{
int n,i=0;
public:
void get()
{
cout<<"INPUT"<<endl;
	cin>>n;
	if(n>1000){get();}
	}
bool chck()
{
    	cout<<"OUTPUT"<<endl;
for(i=2;i<n;i++)
{
    if(n%i==0)
    {
        return false;
        }
    }
    return true;
}
};
int main()
{
Prime n;
n.get();
if(n.chck())
{
    cout<<"yes";
    }
    else
    {cout<<"no";
    }
return 0;
}
