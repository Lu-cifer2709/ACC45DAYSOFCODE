//DEVIDEMAKEEQ
#include <bits/stdc++.h>
using namespace std;

//Find 
int main() {
  int t; 
  cin>>t;
  while(t--)
  {
     int n;
      cin>>n;
      int a[n],N = INT_MAX;
      for(int i=0; i<n; i++)
      {
          cin>>a[i];
          if(N > a[i]) N = a[i];
      }
      
      int x = 0, y = 0;
      
      for(int i=0; i<n; i++){
          if(a[i] != N)
          {
              if(a[i] % N == 0) x++;
              else 
              {
                  y = 1; 
                  break;
              }
          }
      }
	  
      
     if(y) cout << n << endl;
     else cout << x << endl;
  }
  return 0;
}   