#include <bits/stdc++.h>
using namespace std;

int main()
{
    int caseNum = 1;
    int n;

    while (cin >> n)
    {
        vector<int> sample(n);

        for (int i = 0; i < n; i++)
            cin >> sample[i];

        int minVal = *min_element(sample.begin(), sample.end());
        int maxVal = *max_element(sample.begin(), sample.end());

        int rangeVal = maxVal - minVal;

        cout << "Case " << caseNum << ": " << minVal << " " << maxVal << " " << rangeVal << endl;

        caseNum++;
    }

    return 0;
}
