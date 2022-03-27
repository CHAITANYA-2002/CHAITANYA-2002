// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check if x is power of 2
bool check(int x)
{
    // Returns true if x is a power of 2
    return x && (!(x & (x - 1)));
}

// Function to return the
// number of valid pairs
int count(int arr[], int n)
{
    int cnt = 0;

    // Iterate for all possible pairs
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            // Bitwise and value of
            // the pair is passed
            if (check(arr[i] & arr[j]))
                cnt++;
        }
    }

    // Return the final count
    return cnt;
}

// Driver Code
int main()
{
    // Given array
    int arr[];

    int n = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    cout << count(arr, n);
    return 0;
}