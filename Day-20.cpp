//BOBBANK
#include <iostream>
using namespace std;

int main() {
int t;
cin >> t;
while(t--){
    int w, x, y, z,l;
    cin >> w >> x >> y >> z;
    l = (w + (x - y) * z);
    cout << l << endl;
}
	return 0;
}