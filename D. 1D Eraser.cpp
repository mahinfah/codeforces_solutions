#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a;
    cin>>a;

    for(int i=1;i<=a;i++)
    {

        int count=0;


        int m,n;
        cin>>m>>n;

        string s;
        cin>>s;

        for(int i=0;i<m;i++)
        {
            if(s[i]=='B')
            {
             count++;
             i=i+n-1;

            }

        }

        cout<<count<<endl;



    }


}
