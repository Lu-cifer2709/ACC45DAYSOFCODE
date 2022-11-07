//NUM239
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int r,l,i,flag=0;
		cin>>l>>r;
		for(i=l;i<=r;i++)
		{
			if(i%10==2||i%10==3||i%10==9)
			flag++;
		}
		cout<<flag<<endl;
		flag=0;
		
	}
	return 0;
}