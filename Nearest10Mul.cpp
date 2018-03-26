#include <iostream>
using namespace std;
class Nearest10Mul
{
int n,i=0;
public:
void get()
{
cout<<"INPUT"<<endl;
cin>>n;
}
int chck()
{
cout<<"OUTPUT"<<endl;
n=n+10-(n%10);
return n;
}
};
int main()
{
Nearest10Mul n;
n.get();
cout<<n.chck();;
return 0;
}
