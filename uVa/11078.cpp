#include <bits/stdc++.h>
using namespace std;

int calculate_max_score_difference(const vector<int> &scores)
{
    int maxDifference = -1;
    int maxSeniorScore = scores[0];

    for (int i = 1; i < scores.size(); i++)
    {
        if (maxSeniorScore > scores[i])
        {
            maxDifference = max(maxDifference, maxSeniorScore - scores[i]);
        }
        maxSeniorScore = max(maxSeniorScore, scores[i]);
    }

    return maxDifference;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> scores(n);
        for (int i = 0; i < n; i++)
        {
            cin >> scores[i];
        }

        int score_difference = calculate_max_score_difference(scores);
        cout << score_difference << endl;
    }

    return 0;
}
