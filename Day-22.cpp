//BMI
#include <iostream>
using namespace std;

int main() {
int t;
cin >> t;
while(t--){
    int M, H, I;
    cin >> M >> H;
    I = M/(H*H);
    if (I <= 18) cout << "1" << endl;
    else if (I >= 19 && I <= 24) cout << "2" << endl;
    else if (I >= 25 && I <= 29) cout << "3" << endl;
    else cout << "4" << endl;
    
}
	return 0;
}