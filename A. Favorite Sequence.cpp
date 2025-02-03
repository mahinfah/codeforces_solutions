#include<iostream>
using namespace std;
int main()
{
    int a;

    cin>>a;
    for(int i=1 ;i<=a;i++)
    {

        int n;
        cin>>n;
        int m[n];

        for(int i=0;i<n;i++)
        {
            cin>>m[i];

        }


        int start=0;
        int ending=n-1;
        int count=0;
        while(count!=n)
        {
            if(count!=n)
            {
          cout<<m[start]<<" ";
          start++;
          count++;


            }

            if(count!=n)
            {





          cout<<m[ending]<<" ";
          ending--;
           count++;
            }



        }
         cout<<endl;

    }


}
