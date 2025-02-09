
#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cin>>r>>c;

	int m=c-1;
	int o=2;
	int k=0;
//	cout<<m<<n;
	int a [r] [c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			int lol=(i+1)/2;



			if((i+1)%2==0&&j!=m&&lol%2!=0)
			{
				cout <<"." ;
			}
			else if((i+1)%2==0&&j==m&&lol%2!=0)
			{
				cout <<"#" ;


			}

			else if((i+1)%2==0&&lol%2==0)
			{

				if(j==k&&lol%2==0)
				{
					cout <<"#" ;

				}
				else
				{
					cout<<".";
				}
			//	cout<<"sgshahah";

			}

						else if((i+1)%2==0&&j==m&&o%2==0)
			{
				cout <<"#" ;
				o++;

			}

			else
			{
			cout <<"#";

			}

		}
		cout<<endl;

	}
}
