//{ Driver Code Starts
#include <bits/stdc++.h>
const int mod = 1e9 + 7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
public:
    // Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string s1, string s2)
    {
        // your code here
        int dp[n + 1][m + 1];
        memset(dp, 0, sizeof(dp)); // memset is used to initialize the array with 0
        for (int i = 1; i <= n; i++)
        {
            char c1 = s1[i - 1];
            for (int j = 1; j <= m; j++)
            {
                char c2 = s2[j - 1]; // c1 and c2 are the current characters of s1 and s2 respectively
                if (c1 == c2)
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                    dp[i][j] = max({dp[i - 1][j], dp[i][j - 1]});
            }
        }
        return dp[n][m];
    }
};

//{ Driver Code Starts.
int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m; // Take size of both the strings as input
        string s1, s2;
        cin >> s1 >> s2; // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends