//PENALTY
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin >> t;
while(t--)
{
int f = 0,s = 0;
int a[10];
	for(int i=0; i<10; i++)
	{ 
            cin >> a[i];
	}
	for(int i=0;i<10;i++)
    {
    if(i%2==0) s+=a[i];
	else f+=a[i];
    }
	if(f > s) cout<<"2"<<endl;
	else if(s > f) cout<<"1"<<endl;
	else cout<<"0"<<endl;
}
	return 0;
}