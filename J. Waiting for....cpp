#include<Iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int a[n];
    char b[n];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];


        cin>>a[i];
    }

    int p=0;
    int bb=0;
     for(int i=0;i<n;i++)
    {
        if(b[i]=='P')
        {
            p=p+a[i];
        }

        if(b[i]=='B')
        {




            if(a[i]>p)
            {
                cout<<"YES"<<endl;
                 p=0;
                 cout<<"                              "<<p<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
                 p=p-a[i];
                  cout<<"                              "<<p<<endl;
            }

        }
    }


}
