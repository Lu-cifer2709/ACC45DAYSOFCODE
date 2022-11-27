//BROKENSTRING
#include <iostream>
using namespace std;

int main() {
int t;
cin >> t;
while(t--)
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string a = s.substr(0,n/2);
    string b = s.substr(n/2,n);
    if (a==b) cout << "Yes" << endl;
    else cout << "No" << endl;
}
	return 0;
}