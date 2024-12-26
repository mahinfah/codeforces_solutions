
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n ,f ,s ,a[200];
    cin>>n>>f;


    for(int i=0;i<f;i++)
    {
        cin>>a[i];
    }

    cin>>s;
    for(int i=f;i<f+s;i++)
    {
        cin>>a[i];
    }
  int lol=f+s;
    sort(a,a+lol);


int count=0;
        for(int i=0;i<lol;i++)
    {
         if(a[i]!=a[i+1])
         {
             count++;
         }
    }


if(count==n)
{
    cout<<"I become the guy.";
}
else if(count!=n)
{
    cout<<"Oh, my keyboard!";
}

}
