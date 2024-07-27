#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << (n % 2 == 0 || n == 1 ? "YES" : "NO") << endl;
    }
    
    return 0;
}
