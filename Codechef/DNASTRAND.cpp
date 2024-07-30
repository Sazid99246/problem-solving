#include <iostream>
#include <string>

using namespace std;

// Function to replace characters in the DNA string
string replaceDNA(const string& s) {
    string result = s;
    for (char& c : result) {
        switch (c) {
            case 'T': c = 'A'; break;
            case 'A': c = 'T'; break;
            case 'C': c = 'G'; break;
            case 'G': c = 'C'; break;
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n; // Reading the length of the string (though not used here)
        string s;
        cin >> s;
        cout << replaceDNA(s) << endl;
    }
    return 0;
}
