#include <iostream>
#include <string>

using namespace std;

bool check(int, int, int);

int main()
{
    int n;
    cin >> n;
    cout << n << ":" << endl;
    for (int i = 2; i <= (n / 2) + 1; i++)
    {
        for (int j = i - 1; j < i + 1; j++)
        {
            if (check(i, j, n) == true)
            {
                cout << i << "," << j << endl;
            }
        }
    }
    // cout<<"\nEclipse C++"<<endl;
    return 0;
}

bool check(int i, int j, int n)
{
    int sum = 0, k = 0;
    if (i + j == n)
        return true;
    while (sum < n)
    {
        if (k % 2 == 0)
            sum += i;
        else
            sum += j;
        k++;
    }
    if (sum == n)
        return true;
    else
        return false;
}