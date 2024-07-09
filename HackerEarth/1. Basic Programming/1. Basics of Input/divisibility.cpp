#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int last_digit;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (i == n - 1)
        {
            last_digit = num % 10;
        }
    }

    if (last_digit == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
