#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int f;
        cin >> f;
        int total = 0;
        while (f--)
        {
            int farmyard_size, number_of_animals, environment_friendliness;
            cin >> farmyard_size >> number_of_animals >> environment_friendliness;
            int per_farmer = farmyard_size * environment_friendliness;
            total += per_farmer;
        }
        cout << total << endl;
    }

    return 0;
}
