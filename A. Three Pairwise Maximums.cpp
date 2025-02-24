#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a!=b&&b!=c&&a!=c)
        {
           // cout<<3;
            cout<<"NO"<<endl;
        }
        if(a==b&&a==c&&c==b)
        {
                  cout<<"YES"<<endl;
                    cout<<a<<" "<<b<<" "<<c<<endl;
        }

        else if(a==b||b==c||a==c)
        {
            if(a==c)
            {
                if(a>b)
                {
                    cout<<"YES"<<endl;
                    cout<<a<<" "<<b<<" "<<b<<endl;
                }
                else if(a<b)
                {
                    cout<<"NO"<<endl;
                }

            }
            else if(a==b)
            {

                  if(a>c)
                {
                    cout<<"YES"<<endl;
                    cout<<a<<" "<<c<<" "<<c<<endl;
                }
                else if(a<c)
                {
                    cout<<"NO"<<endl;
                }



            }
            else if(b==c)
            {

                  if(b>a)
                {
                    cout<<"YES"<<endl;
                   cout<<a<<" "<<a<<" "<<b<<endl;
                }
                else if(b<a)
                {
                    cout<<"NO"<<endl;
                }




            }
        }


    }


}
