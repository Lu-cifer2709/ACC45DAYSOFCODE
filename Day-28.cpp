//EVENSPLIT
#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int t;
  cin >> t;
  while(t--){
      int n;
      cin >> n;
      string L27;
      cin >> L27;
      int j09 = 0;
      int k13 = 0;
      for (int i = 0; i < L27.size(); i++) {
          if(L27[i] == '0')
              k13++;
          else
              j09++;
      }
      if(L27.size() <= 2){
          cout << L27 << endl;
          continue;
      }
      string N19 = "";
      while(k13--){
          N19 +='0';
      }
      while(j09--){
          N19 +='1';
      }
      cout << N19 << endl;
  }
  return 0;
}