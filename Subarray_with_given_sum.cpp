#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s)
    {
        vector<int> ans{0, 0};
        vector<int> no_ans{-1};
        long long a{0};
        for (int i = 0; i < n; i++)
        {
            a = a + arr[i];
            if (a > s)
            {
                ans[0]++;
                a = a - arr[ans[0]];
            }
            else if (a == s)
            {
                ans[1] = i;
                return ans;
            }
        }
        return no_ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long s;
        cin >> n >> s;
        vector<int> arr(n);
        // int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends