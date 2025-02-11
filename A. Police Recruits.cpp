#include<iostream>
using namespace std;
int main()
{


    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int crime =0;
    int lol=0;
    int po=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==-1&&lol==0)
        {
            crime++;

        }
       else if(a[i]!= -1)
        {
            lol++;
            po=po+a[i];
      // cout<<1;


        }
          else if(a[i]==-1&&po!=0)
        {
          // cout<<po<<endl;
           po--;
          // cout<<5;

        }

          else if(a[i]==-1&&po==0)
        {

           crime++;
           // cout<<crime;


        }


    }

cout<<crime;

}
