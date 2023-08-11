//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution
{
public:
    int minJumps(int arr[], int n)
    {
        // Your code here
        int dp[n];
        dp[0] = 0;
        for (int i = 1; i < n; i++)
        {
            dp[i] = INT_MAX;
            for (int j = 0; j < i; j++)
            {
                if (i <= j + arr[j] && dp[j] != INT_MAX)
                {
                    dp[i] = min(dp[i], dp[j] + 1);
                    break;
                }
            }
        }
        if (dp[n - 1] == INT_MAX)
            return -1;
        return dp[n - 1];
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.minJumps(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends