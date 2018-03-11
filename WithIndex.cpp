#include <iostream>
#include <string>
#include<math.h>
using namespace std;
class WithIndex
{
    int n,i,j,ar[1000],s,d=0;
    public:
    WithIndex()
    {
    get();
    display();
    }
    void get()
    {
    cout<<"INPUT"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
    cin>>ar[i];
    }
    }
    void display()
    {
    cout<<"OUTPUT"<<endl;
    for(i=0;i<n;i++){cout<<ar[i]<<" "<<i<<endl;}
    }
};
int main()
{
WithIndex sa;
return 0;
}
