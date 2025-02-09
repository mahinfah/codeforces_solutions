#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {


        string a;
        cin>>a;

        int m=a.length();
        int mm=1;
        int c;
        for(int i=0;i<m;i++)
        {
         if(a[i]==a[i+1])
         {
             mm--;
             cout<<1<<endl;
             break;
         }
        }
        if(mm!=0)
        {
          cout<<m<<endl;
        }


}
}
