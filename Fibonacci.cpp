#include <stdio.h>
#include <iostream>
using namespace std;
class Fibonacci
{
int n,a=0,b=1,s=1,i;
void get()
{
    cout<<"INPUT"<<endl;
    cin>>n;
}
void fibo()
{
    cout<<"OUTPUT"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<s<<" ";
        s=a+b;
        a=b;
        b=s;
    }
}
public:
Fibonacci()
{
    get();
    fibo();
}
};
int main()
{
Fibonacci f;
return 0;
}
