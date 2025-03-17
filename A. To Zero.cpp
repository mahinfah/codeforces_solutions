#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;


    for(int i=1;i<=n;i++)
    {

        long int n;long int k;
        cin>>n>>k;
        long int sum=0;

      while(n>0)
      {
        if(n%2==0)
        {
            if(k%2==0)
            {
                n=n-k;
                sum++;
                 k=k-2;
                if(n%2==0)
                {
                    if(n%k==0)
                    { int p=n/k;
                    sum=sum+p;

                    }
                    else if(n%k!=0)
                    {
                       int p=(n/k)+1;
                       sum=sum+p;
                    }


                }



            }
            else if(k%2!=0)
            {
                k=k-1;

                if(n%k==0)
                {sum=n/k;
                 int p=k*sum;
                 n=n-p;
                 break;

                }
                else if(n%k!=0)
                {

                    sum=n/k+1;
                 int p=(k*sum);
                 n=n-p;
                 break;
                }

            }



        }

        else if(n%2!=0)
        {
            if(k%2!=0)
            {
                n=n-k;
                sum++;
                 k=k-1;
                if(n%2==0)
                {
                    if(n%k==0)
                    {
                      int p=n/k;
                    sum=sum+p;
                    n=n-(p*n);
                    break;

                    }
                    else if(n%k!=0)
                    {
                          int p=n/k;
                    sum=sum+p+1;
                    n=n-(p*n);
                    break;
                    }

                }



                else if(n%2!=0)
                {

                    k=k-2;
                       if(n%k==0)
                       {
                          int p=n/k;
                    sum=sum+p;
                    n=n-(p*n);
                       }
                       else if(n%k!=0){
                             int p=n/k;
                    sum=sum+p+1;
                    n=n-(p*n);
                    break;

                       }

                }

            }






        }


      } cout<<sum<<endl;



    }



}
