#include<iostream>
using namespace std;
int main()
{

    int a;
    int b;
    cin>>a>>b;


     int s=a;
     int sum=a;
     while(s/b!=0)
     {
         if(s%b==0)
         {
             s=s/b;
              sum=sum+s;
         }
          else if(s%b!=0)
         {
             int lol=s%b;

             s=s/b;
              sum=sum+s;
            s=s+lol;

         }

     }

     cout<<sum<<endl;


}
