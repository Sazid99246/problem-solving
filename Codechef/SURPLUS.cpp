#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) 
    {
	    int a1,a2,b1,b2;
	    cin >> a1 >> a2 >> b1 >> b2;
	    int a = a1 - a2;
	    int b = b1 - b2;
	    int comb = a + b;
	    if(comb < 0)
	    {
	        cout << "YES" << endl;
	    }
	    else
	    {
	        cout << "NO" << endl;
	    }
	}
    
    return 0;
}
