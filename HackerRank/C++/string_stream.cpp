#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> nums;
    stringstream s(str);
    
    char ch;
    int temp;

    while (s >> temp)
    {
        nums.push_back(temp);
        s >> ch;
    }
    
    return nums;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}