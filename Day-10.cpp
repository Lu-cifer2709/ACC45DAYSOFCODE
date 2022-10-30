//BROKEN PHONE
#include <iostream>
using namespace std;

int main() {
 int n,X,Y;
 cin >> n;
 for (int i = 0; i<n; i++){
    cin >> X >> Y;
    if (X > Y) cout << "NEW PHONE\n";
    else if (X < Y) cout << "REPAIR\n";
    else cout << "ANY\n";
 }
	return 0;
}