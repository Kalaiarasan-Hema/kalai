#include <iostream>
#include <string>
using namespace std;
class KthSmall
{
string s;
int c=0,c2=0,t,n,k,ar[1000],i;
void get()
{
cout<<"Input"<<endl;
cin>>n;
cin>>k;
}
void join()
{
t=k;
while(t%10)
{
    ar[c]=t%10;
    c++;
    t=t/10;
}
t=s;
while(t%10)
{
    c++;
    c2++;
    t=t/10;
}
for(i=)
for(i=0;i)
}
void display()
{cout<<"Output\n"<<ar[n-k];}
public:
KthSmall()
{
get();
join();
}
};
int main()
{
KthSmall k;
return 0;
}
