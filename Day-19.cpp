//BULBLIFE
#include <iostream>
using namespace std;

int main() {
int t;
cin >> t;
while(t--){
    int n, k,b = 0;
    cin >> n >> k;
    for(int i =0; i<n-1;i++){
        int a;
        cin >> a;
        b +=a;
    }
    int v = (n*k - b);
    if (b >= n*k) cout << 0 << endl;
    else cout << v << endl;
}
	return 0;
}
