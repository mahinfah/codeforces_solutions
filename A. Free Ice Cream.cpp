#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m;
    cin>>n;

    string a[m];
    int b[m];

    for(int i=0;i<m;i++)
    {
      cin>>a[i];
      cin>>b[i];




    }


    int sum=n;

    int c=0;
    for(int i=0;i<m;i++)
    {

     if(a[i]=="+")
     {
         sum=sum+b[i];
     }

     if(a[i]=="-")
     {
         if(sum<b[i])
         {
             c++;
         }
           else if(sum>=b[i])
         {
           sum=sum-b[i];
         }



     }



    }
  cout<<sum<<" "<<c;

}
