#include<iostream>
using namespace std;
int main()
{
   int a[15]=  {  2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43,47 };


//    cout<<a[14];
    int m,n;
    cin>>m>>n;
    int c=0;

    for(int i=0;i<15;i++)
    {
        if(a[i]==m)
        {
            if(n==a[i+1])
            {
                c++;
                cout<<"YES";
                break;
            }
        }
    }

    if(c==0)
    {
        cout<<"NO";
    }
}
