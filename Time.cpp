#include <iostream>
#include <string>
#include<math.h>
using namespace std;
class Time
{
    int n,j=0,s,d;
    public:
    Time()
    {
    get();
    calc();
    display();
    }
    void get()
    {
    cout<<"INPUT"<<endl;
    cin>>n;
    }
    void calc()
    {
    s=n;
    while(n/60)
    {
    n=n-60;
    j++; 
    }
    d=s%60;
    }
    void display()
    {
    	cout<<"OUTPUT"<<endl;
        cout<<j<<" "<<d;
    }
};
int main()
{
Time t;
return 0;
}
