#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {


        string a;
        cin>>a;
        int m=a.length();
        int c;
        for(int i=0;i<m;i++)
        {
            if(a[i]=='u')
            {
                if(a[i+1]=='s')
                {
                    c=i;
                }
            }

        }
        for(int i=0;i<c;i++)
        {
            cout<<a[i];
        }cout<<"i";

cout<<endl;

    }

}
