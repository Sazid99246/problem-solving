#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<string> bites(n);

    // Reading the bites
    for (int i = 0; i < n; ++i)
    {
        cin >> bites[i];
    }

    // Check if the sequence makes sense
    for (int i = 0; i < n; ++i)
    {
        // The expected number is (i+1)
        if (bites[i] != "mumble")
        {
            int number = stoi(bites[i]);
            if (number != i + 1)
            {
                cout << "something is fishy" << endl;
                return 0;
            }
        }
    }

    // If all numbers match or are "mumble"
    cout << "makes sense" << endl;

    return 0;
}
