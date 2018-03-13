#include <iostream>
#include <string>
#include<math.h>
using namespace std;
class Time2
{
    int h1,h2,m1,m2,h3=0,m3=0,t;
    public:
    Time2()
    {
    get();
    calc();
    display();
    }
    void get()
    {
    cout<<"INPUT"<<endl;
    cin>>h1>>m1>>h2>>m2;
    }
    void calc()
    {
    m1=m1+(h1*60);
    m2=m2+(h2*60);
    if(m1<m2)
    {m3=m2-m1;}
    else
    {m3=m1-m2;}
    while(m3>60)
    {
    h3++;
    m3=m3-60;
    }
    }
    void display()
    {
    cout<<"OUTPUT"<<endl;
    cout<<h3<<" "<<m3;
    }
};
int main()
{
Time2 t;
return 0;
}
