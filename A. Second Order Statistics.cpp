#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0 ;i<n;i++)
    {
        cin>>a[i];
    }


 for(int i =0;i<n;i++)
  {

    for(int j =0;j<n-i-1;j++)
         {
             if(a[j]>a[j+1])
             {
                 int temp =a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
             }

         }

  }
  int check=a[0];
int count=0;
  for(int i =0 ;i<n;i++)
    {
        if(check==a[i])
        {
           count++;

        }
    }
   // cout<<count;
   // cout<<n;
  if(n==1|| count==n)
  {
    cout<<"NO";


  }
  else
   for(int i=1 ;i<n;i++)
    {
       if(a[0]==a[i])
       {
           continue;
       }
       if(a[0]<a[i])
       {
           cout<<a[i];
           break;
       }
    }




}




