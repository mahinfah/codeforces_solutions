//https://codeforces.com/problemset/problem/1807/B
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {

        int a;
        cin>>a;

        int arr[a];

        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
        }


        int bi=0,mi=0;
        for(int i=0;i<a;i++)
        {
            if(arr[i]%2==0)
            {
                  mi =mi+arr[i];
            }

            else if(arr[i]%2!=0)
            {

                bi=bi+arr[i];
            }
        }

        if(mi>bi)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }



    }
}
