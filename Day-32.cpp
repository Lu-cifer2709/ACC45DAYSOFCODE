//DIGARR
#include <iostream>
using namespace std;

int main() {
int t;
cin >> t;
while(t--)
{
    int n,d = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i =0; i < n; i++)
    {
     if(s[i]=='0' || s[i]=='5')
     {
	   d =1;
	   break;
	 }    
    }
    if(d == 1) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
	return 0;
}