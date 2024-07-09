#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    int zs = 0, os = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'z')
        {
            zs++;
        }
        else
        {
            os++;
        }
    }
    if (zs * 2 == os)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    
    return 0;
}
