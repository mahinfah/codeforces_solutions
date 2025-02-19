#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cin>>a>>b;
    int n[b];
    for(int i=0;i<b;i++)
    {
        cin>>n[i];
    }
    long long sum=0;
sum=sum+n[0];
    for(int i=1;i<b;i++)
    {




           if(n[i-1]>n[i])
           {
               int l=a-n[i-1];

               sum=sum+l+n[i];



           }
           else if(n[i-1]<=n[i])
           {
              // cout<<sum<<n[i]<<endl;

               int t=n[i]-n[i-1];
               sum=sum+t;

           }



    }

    cout<<sum-1<<endl;



}
