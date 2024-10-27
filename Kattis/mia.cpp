#include <iostream>
using namespace std;

int score(int a, int b)
{
    if (b > a)
        swap(a, b);
    if (a == 2 && b == 1)
        return 100;
    if (a == b)
        return 90 + a;
    return a * 10 + b;
}

int main()
{
    int s1, s2, t1, t2;
    while (true)
    {
        cin >> s1 >> s2 >> t1 >> t2;

        if (s1 == 0 && s2 == 0 && t1 == 0 && t2 == 0)
            break;

        int player1_score = score(s1, s2);
        int player2_score = score(t1, t2);

        if (player1_score > player2_score)
            cout << "Player 1 wins." << endl;
        else if (player1_score < player2_score)
            cout << "Player 2 wins." << endl;
        else
            cout << "Tie." << endl;
    }

    return 0;
}
