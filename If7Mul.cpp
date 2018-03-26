#include <iostream>
using namespace std;
class If7Mul
{
int n;
public:
void get()
{
cout<<"INPUT"<<endl;
cin>>n;
}
void chck()
{
if(n%7==0)
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
If7Mul n;
n.get();
cout<<"OUTPUT"<<endl;
n.chck();
return 0;
}
