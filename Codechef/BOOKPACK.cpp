#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int boxes_per_shelf = (y + z - 1) / z;
        int total_boxes = boxes_per_shelf * x;

        cout << total_boxes << endl;
    }

    return 0;
}
