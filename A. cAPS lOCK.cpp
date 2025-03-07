#include<bits/stdc++.h>
using namespace std;
int main()
{

    string a;

    cin>>a;
    int c=0;
       for(int i=0;i<a.length();i++)
       {
           if(isupper(a[i]))
           {
               c++;
           }
       }
       if(c==a.length())
       {
        for(int i=0;i<a.length();i++)
       {


              cout<<(char)tolower(a[i]);

       }

       }
       else if(c==(a.length()-1)&&islower(a[0]))
       {

        for(int i=0;i<a.length();i++)
       {
          if(i==0)
          {
              cout<<(char)toupper(a[i]);
          }
          else
          {
              cout<<(char)tolower(a[i]);
          }
       }
       }
       else
       {
          cout<<a;
       }

}
