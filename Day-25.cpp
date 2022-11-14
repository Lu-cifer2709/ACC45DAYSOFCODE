//SUMNEQ
#include <iostream>
using namespace std;

int main() {
 int Nu,pos=0;
 cin >> Nu;
 for(int k=1; k <= Nu; k++)
 {
     for(int m = 1; m <= Nu; m++)
     {
         if(k + m == Nu)
         {
             pos++;
         }
     }
 }
 cout << pos;
 return 0;
}