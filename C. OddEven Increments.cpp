
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {

         int m;
         cin>>m;
         int a[m];

         for(int i=0;i<m;i++)
         {

             cin>>a[i];

         }

int k=1;
int l=0,ll=0;
             for(int i=1;i<m;i++)
         {

                 if(a[i]==a[0])
                 {
                     k++;
                 }
         }


            for(int i=0;i<m;i++)
         {

                 if(a[i]%2==0)
                 {
                     l++;
                 }
         }
             for(int i=0;i<m;i++)
         {

                 if(a[i]%2!=0)
                 {
                     ll++;
                 }
         }





         int c=1;

           for(int i=0;i<m;i++)
         {


             if(a[i]%2==0)
             {
                 if(a[i+1]%2!=0)
                 {
                     c++;
                 }
             }

                 if(a[i]%2!=0)
             {
                 if(a[i+1]%2==0)
                 {
                     c++;
                 }
             }
             if(i==m-2)
             {
                 break;
             }


         }



       //  cout<<c<<endl;
         if(c==m||k==m||l==m||ll==m)
         {
             cout<<"YES"<<endl;
         }
         else{
            cout<<"NO"<<endl;
         }


    }



}
