#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int pa, pb, qa, qb;
        cin >> pa >> pb >> qa >> qb;

        int penalty_for_p = max(pa, pb);
        int penalty_for_q = max(qa, qb);

        if (penalty_for_p < penalty_for_q)
        {
            cout << "P" << endl;
        }
        else if (penalty_for_p > penalty_for_q)
        {
            cout << "Q" << endl;
        }
        else
        {
            cout << "TIE" << endl;
        }
    }

    return 0;
}
