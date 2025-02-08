#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    //cin>>a;
    getline(cin,a);
    sort(a.begin(),a.end());
   //cout<<a;

    int count=0;
    for(int i=0;i<a.length()-1;i++)
    {
        if(a[i]=='{'||a[i]==' '||a[i]=='}')
            {
                continue;

            }
            else
            {
                if(a[i]!=a[i+1])
                {
                    count++;
                }

            }

    }
    if(count>1)
    { cout<<count-1;

    }
    else
    {
       cout<<count;
    }

}

