
//https://codeforces.com/contest/149/problem/A
#include<iostream>
using namespace std;
int main()
{

    int a[12];
    int b;
    cin>>b;
    int sum=0;
    for(int i=0;i<12;i++)
    {
        cin>>a[i];
    }
 int count=0;
    int max_n=a[0];


    for(int i =0;i<12-1;i++)
    {

         for(int j =0;j<12-i-1;j++)
         {
             if(a[j]>a[j+1])
             {
                 int temp =a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
             }

         }

    }




      for(int i=11;i>=0;i--)
    {

     if(sum<b)
      {   sum=sum+a[i];
         count++;
      }




      if(sum>=b)
      {
          break;
      }

    }



if(sum<b)
{
    cout<<-1;
}
else
{
     cout<<count;
}


}
