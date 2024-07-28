#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    // Vector to store the arrays
    vector<vector<int>> arrays(n);

    // Reading the arrays
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arrays[i].resize(k); // Resize the inner vector to size k
        for (int j = 0; j < k; j++)
        {
            cin >> arrays[i][j];
        }
    }

    // Processing the queries
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << arrays[a][b] << endl;
    }

    return 0;
}
