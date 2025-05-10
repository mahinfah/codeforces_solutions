//https://codeforces.com/contest/230/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin>>s;
    int n;
    cin>>n;
pair <int ,int > arr[n];

int lol=0;

for(int i=0;i<n;i++)
{
    cin>>arr[i].first>>arr[i].second;

}

sort(arr,arr+n);

for(int i=0;i<n;i++)
{

    if(s>arr[i].first)
    {
        s=s+arr[i].second;
    }
    else
    {
        lol++;
        break;
    }
}
if(lol==0)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}



}
