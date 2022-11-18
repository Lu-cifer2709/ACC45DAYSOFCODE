//CARRANGE
#include <iostream>
using namespace std;

int main() {
int t;
cin >> t;
while(t--)
{
   int p, m, v;
   cin >> p >> m >> v;
   if(p > 1) cout << (m - (p-1))*v << endl;
   else cout << m*v << endl;
}
	return 0;
}