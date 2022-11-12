//MATCHES
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a, b, s, n = 0;
		cin>>a>>b;
		s = a + b;
		while(s)
		{
			if(s%10==0)
				n+=6;
			else if(s%10==1)
				n+=2;
			else if(s%10==2)
				n+=5;
			else if(s%10==3)
				n+=5;
			else if(s%10==4)
				n+=4;
			else if(s%10==5)
				n+=5;
			else if(s%10==6)
				n+=6;
			else if(s%10==7)
				n+=3;
			else if(s%10==8)
				n+=7;
			else if(s%10==9)
				n+=6;
			s=s/10;
		}
		cout<<n<<endl;
	}
	return 0;
}