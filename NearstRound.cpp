#include <iostream>
using namespace std;
class NearstRound
{
double d;
int n;
public:
NearstRound()
{
get();
display();
}
void get()
{
cout<<"INPUT"<<endl;
cin>>d;
}
void display()
{
cout<<"OUTPUT"<<endl;
n=d;
cout<<n+1<<endl;
}
};
int main()
{
NearstRound ip;
return 0;
}
