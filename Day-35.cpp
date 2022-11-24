//BUILDINGRACE
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        float a,b,x,y,c,d;
        cin >> a >> b >> x >> y;
        c = a/x;
        d = b/y;
        if(c > d) cout << "Chefina" << endl;
        else if (c < d) cout << "Chef" << endl;
        else cout << "Both" << endl;
    }
	return 0;
}