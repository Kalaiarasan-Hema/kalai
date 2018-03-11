#include <iostream>
#include <string>
#include<math.h>
using namespace std;
class MedianElement
{
    int n,i,j,ar[1000],s,d=0;
    public:
    MedianElement()
    {
    get();
    sort();
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
    void display()
    {
    cout<<"OUTPUT"<<endl;
    cout<<ar[n/2];
    }
};
int main()
{
MedianElement sa;
return 0;
}
