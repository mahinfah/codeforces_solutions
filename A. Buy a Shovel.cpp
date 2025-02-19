#include<iostream>
using namespace std;
int main()
{

    int a,b;

cin>>a>>b;
int s;
for(int i=1;i<=10;i++)
{

    s=a*i;
    if(s%10==0||s%10==b)
    {
        cout<<i;
        break;
    }
}




}
