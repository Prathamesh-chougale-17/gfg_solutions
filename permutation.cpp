//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Complete this function
    int factorial(int n)
    {
        return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
    }

    vector<string> permutation(string S)
    {
        string x;
        int x = factorial(S.length());
        vector<string> v;
        sort(S.begin(), S.end());
        do
        {
            x = S;
            v.push_back(x);
        } while (next_permutation(S.begin(), S.end()));

        return v;
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S;
        cin >> S;
        Solution ob;
        vector<string> vec = ob.permutation(S);
        for (string s : vec)
        {
            cout << s << " ";
        }
        cout << endl;
    }
    return 0;
}