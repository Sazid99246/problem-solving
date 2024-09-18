//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array
{
public:
    template <class T>
    static void input(vector<T> &A, int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%lf ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        cout << setprecision(3) << fixed;
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};

// } Driver Code Ends

class Solution
{
public:
    double switchCase(int choice, vector<double> &arr)
    {
        double area = 0.0, r = 0.0, L = 0.0, B = 0.0;
        switch (choice)
        {
        case 1:
            r = arr[0];
            area = M_PI * r * r;
            break;

        case 2:
            L = arr[0];
            B = arr[1];
            area = L * B;
            break;
        }

        return area;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    scanf("%d ", &t);
    while (t--)
    {

        int choice;
        scanf("%d", &choice);

        vector<double> arr(choice);
        Array::input(arr, choice);

        Solution obj;
        double res = obj.switchCase(choice, arr);
        // cout<<fixed<<endl;
        if (res == int(res))
        {
            cout << int(res) << endl;
            continue;
        }
        cout << setprecision(2) << fixed;
        //
        // }else{
        cout << res << endl;
        // }
    }
}

// } Driver Code Ends