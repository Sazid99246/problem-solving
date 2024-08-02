#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;

        // Calculate the price after 10% discount
        double discountedPrice = N * 0.9;

        if (discountedPrice < M)
        {
            cout << "ONLINE" << endl;
        }
        else if (discountedPrice > M)
        {
            cout << "DINING" << endl;
        }
        else
        {
            cout << "EITHER" << endl;
        }
    }

    return 0;
}
