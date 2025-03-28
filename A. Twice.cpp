//https://codeforces.com/problemset/problem/2037/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

   int n;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       int m;
       cin>>m;
       vector<int>a(m);

       for(int i=0;i<m;i++)
       {

           cin>>a[i];


       }
       sort(a.begin(),a.end());
int c=0;
         for(int i=0;i<m;i++)
       {

                if(a[i]==a[i+1])
                {
                    c++;
                    i++;

                }

       }
       cout<<c<<endl;


   }


}
