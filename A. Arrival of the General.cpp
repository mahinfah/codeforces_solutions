//
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }


    int big=0,small=INT_MAX, bid,sid;

    for(int i=0;i<n;i++)
    {

        if(a[i]<= small)
        {
            small=a[i];
            sid=i+1;
        }


    }



    for(int i=n-1;i>=0;i--)
    {
     if(a[i]>=big)
        {
            big=a[i];
            bid=i+1;
        }



    }


   // cout<<big<<"  "<<small;

   // cout<<"              ";
  //  cout<<bid<<"  "<<sid;
  //  cout<<endl;
if(bid<sid)
{
    cout<<bid-1+(n-sid);
}
if(bid>sid)
{
  cout<<(n-sid)+(bid-1)-1;

}

}
