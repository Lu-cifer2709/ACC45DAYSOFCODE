//TWODIFFPLAIN
#include <iostream>
using namespace std;

int main() {
  int t, a0, b1;
  cin>>t;
    while(t--){
      cin >> a0 >> b1;
      if(a0 == 1 or b1 == 1) cout << "No" << endl;
      else if (a0 % 2 == 1 && b1 % 2 == 1)  cout << "No" << endl;
      else cout << "Yes" << endl;
    }
  
  return 0;
}