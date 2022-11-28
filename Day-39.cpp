//DISTINCTCOL
#include <iostream>
using namespace std;

int main() {
int t;
cin >> t;
while(t--)
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }
    for (int k = 1; k<n; ++k){
        if(a[0]< a[k]) 
        a[0] = a[k];
    }
    cout << a[0] << endl;
    
}
	return 0;
}