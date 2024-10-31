
//https://codeforces.com/problemset/problem/1352/A

#include<iostream>
#include<string>
#include <cmath>


using namespace std;
int main()
{


    int b;
    cin>>b;


    for(int i=0;i<b;i++)
    {
        int l;

        string a;

        cin>>a;
        int count=0;

       int len=a.length();

        for(int i =0;i<len;i++)
        {
            if(a[i]!='0')
            {
                count++;
            }


        }

         cout<<count<<endl;


          for(int i=0;i<len-1;i++)
        {

         if(a[i]!='0')
           {
                   int p=i+1;
                   int pp=len-p;
                   int number = 10;
                   int square=1;
                   square = pow(10, pp);
                //   cout<<square<<"S :      ";
                   char c = a[i];
                   int convert = c - '0';
                   int result=1;
                   result= convert*square;
                          cout<<result <<" ";
           }
        }
        if(a[len-1]!='0')
            cout<<a[len-1];
        cout<<endl;


    }


}
