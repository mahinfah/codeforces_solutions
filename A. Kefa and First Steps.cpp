//https://codeforces.com/contest/580/problem/A
#include<iostream>
using namespace std;
int main()
{
    int aa;
    cin>>aa;

    int a[aa];


    for(int i=0;i<aa;i++)
    {
      cin>>a[i];
    }
    int count=0;int box=0;
    for(int i=0;i<aa-1;i++)
    {
        if(a[i]<=a[i+1])
        {
            count++;
        }
        if(count>box)
        {
            box=count;
        }
         if(a[i]>a[i+1])
        {
            count=count*0;
        }


    }
    cout<<box+1;

}
