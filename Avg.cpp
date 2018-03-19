#include <iostream>
#include <string>
#include<math.h>
using namespace std;
class Avg
{
    int n,i,j,ar[1000],s,d=0;
    public:
    Avg()
    {
    get();
    average();
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
    void average()
    {
    for(i=0;i<n;i++)
    {
    s=s+ar[i];
    }
    s=s/n;
    }
    void display()
    {
    cout<<"OUTPUT"<<endl<<s;
    }
};
int main()
{
Avg sa;
return 0;
}
