#include<iostream>
using namespace std;
int main()
{
 int a[4];
for(int i=0 ;i<4;i++)
{

    cin>>a[i];

}
int max=0;
int min=0;



  for(int i =0;i<4;i++)
  {

    for(int j =0;j<4-i-1;j++)
         {
             if(a[j]>a[j+1])
             {
                 int temp =a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
             }

         }

  }

for(int i=0 ;i<3;i++)
{

if(a[i]>=max)
{
    max=a[i];
}

}
//cout<<a[2]-a[0]<<" "<<a[2]-a[1]<<" "<<(a[2]-a[0])+(a[2]-a[1])<<endl;

int f=a[3]-a[0];
cout<<a[3]-a[0]<<" "<<a[1]-f<<" "<<a[2]-f;

}
