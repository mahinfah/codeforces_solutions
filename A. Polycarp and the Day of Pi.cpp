#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
      {
          string b = "314159265358979323846264338327";
         // cout<<b;
          string a;
          cin>>a;
          int c=0;
          for(int i=0;i<a.length();i++)
          {

              if(a[i]==b[i])
              {
                  c++;

              }
               else if(a[i]!=b[i])
              {
                  break;

              }
          }
          cout<<c<<endl;





      }


}
