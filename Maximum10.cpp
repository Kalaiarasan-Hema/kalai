#include <iostream>
#include<math.h>
using namespace std;
class Maximum10
{
    int n=10,i,j,ar[1000],s,d=0;
    void get()
    {
    cout<<"INPUT"<<endl;
    for(i=0;i<n;i++)
    {
    cin>>ar[i];
    }
    }
    void sort()
    {
    for(i=0;i<n;i++)
    {
    for(j=i;j<n;j++)
    {
    if(ar[i]<ar[j])
    {
    int t=ar[i];
    ar[i]=ar[j];
    ar[j]=t;
    }
    }
    }
    }
    void display()
    {
    cout<<"OUTPUT"<<endl;
    cout<<ar[0];
    }
    public:
    Maximum10()
    {
    get();
    sort();
    display();
    }
};
int main()
{
Maximum10 me;
return 0;
}
