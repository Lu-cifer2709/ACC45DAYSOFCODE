//EQSARRAY
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--)
  {
      int n, k, flag = 0;
      cin >> n >> k;
      int a[n];
      for(int i = 0; i < n; i++)
      {
          cin >> a[i];
      }
      
      if(n==1 && a[0]==k) flag = 1;
      else flag = 0;
      
      for(int i =0; i<n-1; i++)
      {
          if(k == a[i])
          {
            flag = 1;
            break;
          }
      }
      if (flag == 0) cout << "No" << endl;
      else cout << "Yes" << endl;
  }
	return 0;
}