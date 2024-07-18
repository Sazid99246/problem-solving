#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r1, r2, d1, d2;
    cin >> r1 >> r2 >> d1 >> d2;
    r1 += d1;
    r2 += d2;
    string result = r1 > r2 ? "Dominater" : "Everule";
    cout << result << endl;
    
    return 0;
}