#include <iostream>
#include <deque>
using namespace std;

void printKMax(int arr[], int n, int k)
{
    deque<int> dq;

    // Process the first window of size k
    for (int i = 0; i < k; ++i)
    {
        // Remove elements smaller than the current one from the back of the deque
        while (!dq.empty() && arr[dq.back()] <= arr[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }

    // Process the rest of the array
    for (int i = k; i < n; ++i)
    {
        // The front of the deque is the largest element of the previous window
        cout << arr[dq.front()] << " ";

        // Remove the elements that are out of this window
        while (!dq.empty() && dq.front() <= i - k)
        {
            dq.pop_front();
        }

        // Remove elements smaller than the current one from the back of the deque
        while (!dq.empty() && arr[dq.back()] <= arr[i])
        {
            dq.pop_back();
        }

        // Add the current element's index to the deque
        dq.push_back(i);
    }

    // Print the maximum of the last window
    cout << arr[dq.front()] << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        printKMax(arr, n, k);
    }

    return 0;
}
