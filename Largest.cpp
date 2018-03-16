// Example program
#include <iostream>
#include <string>
using namespace std;
class Largest
{ 
    int n,ar[1000],i,j,c=0;
    public:
    void get()
    {
    cout<<"INPUT"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {cin>>ar[i];
    }
    if(n%2)
    {c++;}
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
        void disp()
        {
            cout<<"OUTPUT"<<endl<<ar[0];
            }
   };
int main()
{
  Largest as;
  as.get();
  as.sort();
  as.disp();
return 0;
}
