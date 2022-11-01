//C WIRE FRAME
#include <iostream>
using namespace std;

int main() {
    int N, M, X,t;
 cin >> t;
 for (int i =0;i< t;i++) {
     cin >> N >>M>>X;
     cout << (N*2+M*2)*X << endl;
 }
	return 0;
}