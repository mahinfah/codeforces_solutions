#include<iostream>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;

    int m= a.length();
    for(int i=0;i<m;i++)
    {
        if(a[i]==b[i])
        {
            cout<<0;
        }
        else
        {
            cout<<1;
        }

    }

}
