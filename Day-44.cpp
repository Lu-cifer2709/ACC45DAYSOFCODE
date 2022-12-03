//CNDY
#include <iostream>
#include <map>
using namespace std;

int main() {
int t;
cin >> t;
while(t--)
{
    int n, flag=0;
    cin >> n;
    map<int,int> m;
    int a[2*n];
    for (int i =0; i<2*n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    
    for(auto x: m)
    {
        if(x.second >= 3)
        {
            cout << "No" << endl;
            flag = 1;
            break;
        }
    }
    if(!flag) cout << "Yes" << endl;
}
	return 0;
}