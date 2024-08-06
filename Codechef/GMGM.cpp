#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, D;
        cin >> N >> D;
        vector<int> targets(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> targets[i];
        }

        bool holdingCloseRange = true;
        int switch_count = 0;

        for (int i = 0; i < N; ++i)
        {
            if (targets[i] <= D)
            {
                if (!holdingCloseRange)
                {
                    switch_count++;
                    holdingCloseRange = true;
                }
            }
            else
            {
                if (holdingCloseRange)
                {
                    switch_count++;
                    holdingCloseRange = false;
                }
            }
        }

        cout << switch_count << endl;
    }

    return 0;
}
