#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i =1;i<=n;i++)
    {

      int mm;
      cin>>mm;
       int m=mm-2;
      int a[m];
int one=0, two=0;
      for(int i=0;i<m;i++)
      {

          cin>>a[i];



      }
      int c=0;



      for(int i=0;i<m-2;i++)
      {
            if(a[i]==1)
          {
              one++;
          }
          if(a[i]==0)
          {
              two++;
          }

          if(a[i]==1&&a[i+1]==0&&one!=m&&two!=m)
          {


                  if(a[i+2]==1)
                  {
                      cout<<"NO"<<endl;
                      c++;
                      break;
                  }

          }

      }

       if(one==m||two==m)
        {
           cout<<"YES"<<endl;
           break;
        }


        if(c==0&&one!=m&&two!=m)
        {
            cout<<"YES"<<endl;
        }




    }


}
