//{ Driver Code Starts
// An efficient C++ program to compute
// sum of bitwise OR of all pairs
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Returns sum of bitwise OR
    // of all pairs
    int XOR(int a, int b)
    {
        return a ^ b;
    }

    long long int sumXOR(int arr[], int n)
    {
        // Complete the function
        long long int answer{0};
        int initial{0}, temp{1};
        // 	for(int i=0;i<n-1;i++){
        // 	    for(int j=i+1;j<n;j++){
        // 	        answer = answer + XOR(arr[i],arr[j]);
        // 	    }
        // 	}
        while (initial != n - 1)
        {
            answer = answer + XOR(arr[initial], arr[temp]);
            if (temp == n - 1)
            {
                initial += 1;
                temp = initial + 1;
            }
            else
                temp += 1;
        }
        return answer;
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
        cin >> n;
        int arr[n + 1];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.sumXOR(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends