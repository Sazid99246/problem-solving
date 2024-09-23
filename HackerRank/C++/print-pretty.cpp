#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while (T--)
    {
        double A;
        cin >> A;
        double B;
        cin >> B;
        double C;
        cin >> C;
        cout << left << hex << showbase << nouppercase << (long)A << endl;
        cout << right << fixed << setw(15) << showpos << setprecision(2) << setfill('_') << B << endl;
        // cout << setiosflags(ios::uppercase) << setiosflags(ios::scientific);
        cout << setprecision(9) << scientific << noshowpos << uppercase << C << endl;
    }
    return 0;
}