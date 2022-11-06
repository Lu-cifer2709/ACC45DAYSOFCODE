//RECENTCOUNT
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
while(t--){
    int n, counts = 0,countl = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if (s == "START38") counts++;
        else countl++;
        }
    cout << counts << " " << countl <<endl;
    }
	return 0;
}