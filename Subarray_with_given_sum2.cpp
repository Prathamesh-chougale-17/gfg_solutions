//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s)
    {
        vector<int> ans(2, 0);
        for (int i = 0; i < n; i++)
        {
            int curr_sum = arr[i];
            if (curr_sum == arr[i])
                return {curr_sum};
            else
            {
                for (int j = i + 1; j < n; j++)
                {
                    curr_sum += arr[j];
                    if (curr_sum == s)
                    {
                        ans[0] = i;
                        ans[1] = j;
                        return ans;
                    }
                    else if (curr_sum > s)
                        break;
                }
            }
        }
        return {-1};
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