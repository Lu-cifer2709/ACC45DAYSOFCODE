// SPEEDTEST
#include <iostream>
using namespace std;

int main() {
 int t;
 float al,bo,a,x,b,y;;
 cin >> t;
 while(t--){
     cin >> a >> x >> b >>y;
     al = a/x;
     bo = b/y;
     if(al > bo) cout << "Alice"<<endl;
     else if (al < bo) cout << "Bob"<<endl;
     else cout << "Equal"<<endl;
 }
	return 0;
}