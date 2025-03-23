#include<bits/stdc++.h>
//https://codeforces.com/contest/1584/problem/C
using namespace std;
int main()
{
     int a;
     cin>>a;

     for(int i=1;i<=a;i++)
     {
         int m;
         cin>>m;


         vector<int>f(m);
         vector<int>s(m);
         for(int i=0;i<m;i++)
         {
             cin>>f[i];

         }
          for(int i=0;i<m;i++)
         {
             cin>>s[i];

         }
              sort(f.begin(), f.end());
        sort(s.begin(), s.end());
int c=0;

          for(int i=0;i<m;i++)
         {
             
               if(s[i]>f[i])
             {
                 f[i]=f[i]+1;
             }

         }


            for(int i=0;i<m;i++)
         {
             if(s[i]==f[i])
             {
                 c++;
             }
         }



 if(c==m)
 {
     cout<<"YES"<<endl;
 }
 else
 {
     cout<<"NO"<<endl;
 }

     }




}
