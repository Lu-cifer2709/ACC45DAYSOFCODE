//NONNEGPROD
#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int t;
  cin>>t;
  while(t--){
      int n;
      cin >> n;
      int a, temp = 0, j = 0;
      for (int i = 0; i < n; i++) {
          cin >> a;
          if(a < 0){
              temp++;
          }
          if(a == 0)
              j = 1;
      }
      if(j)
          cout << "0" << endl;
      else if( temp%2 != 0)
          cout<< "1" << endl;
      else
          cout<< "0" << endl;
  }
  return 0;
}