//MARARUN
#include <iostream>
using namespace std;

int main() {
int t;
cin >> t;
while(t--)
{
    int D, d, A, B, C;
    cin >> D >> d >> A >> B >> C;
    int c = D*d;
    if (c >= 10 && c < 21) cout << A << endl;
    else if (c >= 21 && c < 42) cout << B << endl;
    else if (c >= 42) cout << C << endl;
    else cout << "0" << endl;
}
	return 0;
}