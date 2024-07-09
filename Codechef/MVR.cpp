#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int messiPoints = a * 2 + b;
    int ronaldoPoints = x * 2 + y;

    if (messiPoints > ronaldoPoints)
    {
        cout << "Messi" << endl;
    }
    else if (ronaldoPoints > messiPoints)
    {
        cout << "Ronaldo" << endl;
    }
    else
    {
        cout << "Equal" << endl;
    }
    
    return 0;
}
