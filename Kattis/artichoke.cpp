#include <bits/stdc++.h>
using namespace std;

double calculatePrice(double p, double a, double b, double c, double d, int i) {
    return p * (sin(a * i + b) + cos(c * i + d) + 2);
}

double findMaxDiff(double p, double a, double b, double c, double d, int n, int i, double maxPrice, double maxDiff) {
    if (i > n) {
        return maxDiff;
    }
    double price = calculatePrice(p, a, b, c, d, i);
    if (price > maxPrice) {
        maxPrice = price;
    } else {
        maxDiff = max(maxDiff, maxPrice - price);
    }
    return findMaxDiff(p, a, b, c, d, n, i + 1, maxPrice, maxDiff);
}

int main() {
    double p, a, b, c, d, n;
    cin >> p >> a >> b >> c >> d >> n;
    double maxDiff = findMaxDiff(p, a, b, c, d, n, 1, 0, 0);
    cout << fixed << setprecision(6) << maxDiff << endl;
    return 0;
}