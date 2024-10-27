#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

// Helper function to calculate the "love score" of a name
int calculateLoveScore(string name)
{
    int sum = 0;
    // Only consider alphabetical characters and make them lowercase
    for (char c : name)
    {
        if (isalpha(c))
        {
            c = tolower(c);
            sum += c - 'a' + 1;
        }
    }

    // Reduce the sum to a single digit
    while (sum >= 10)
    {
        int tempSum = 0;
        while (sum > 0)
        {
            tempSum += sum % 10;
            sum /= 10;
        }
        sum = tempSum;
    }

    return sum;
}

int main()
{
    string s, t;
    while (getline(cin, s) && getline(cin, t))
    {
        int sScore = calculateLoveScore(s);
        int tScore = calculateLoveScore(t);

        // Ensure the smaller score is the numerator for a percentage <= 100%
        double ratio = (min(sScore, tScore) * 100.0) / max(sScore, tScore);

        cout << fixed << setprecision(2) << ratio << " %" << endl;
    }

    return 0;
}
