#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // arr: input array
    // n: size of array
    // Function to find the sum of contiguous subarray with maximum sum.
    // https://medium.com/@rsinghal757/kadanes-algorithm-dynamic-programming-how-and-why-does-it-work-3fd8849ed73d#id_token=eyJhbGciOiJSUzI1NiIsImtpZCI6IjYzMWZhZTliNTk0MGEyZDFmYmZmYjAwNDAzZDRjZjgwYTIxYmUwNGUiLCJ0eXAiOiJKV1QifQ.eyJpc3MiOiJodHRwczovL2FjY291bnRzLmdvb2dsZS5jb20iLCJuYmYiOjE2NTc3ODQ2OTcsImF1ZCI6IjIxNjI5NjAzNTgzNC1rMWs2cWUwNjBzMnRwMmEyamFtNGxqZGNtczAwc3R0Zy5hcHBzLmdvb2dsZXVzZXJjb250ZW50LmNvbSIsInN1YiI6IjEwOTg4ODAxMTUwNTYwNzQzNzQyNSIsImVtYWlsIjoic3JpdmFzdGF2YXJhaHVsMDg4QGdtYWlsLmNvbSIsImVtYWlsX3ZlcmlmaWVkIjp0cnVlLCJhenAiOiIyMTYyOTYwMzU4MzQtazFrNnFlMDYwczJ0cDJhMmphbTRsamRjbXMwMHN0dGcuYXBwcy5nb29nbGV1c2VyY29udGVudC5jb20iLCJpYXQiOjE2NTc3ODQ5OTcsImV4cCI6MTY1Nzc4ODU5NywianRpIjoiNzEyYzhhOTE3YmNlZTk1NmE4ZThiOTZjMzMyODk0MWQ1ZTJkY2Y2ZCJ9.nBLnst2j2QZ9cu93S6IKNA8U_lCCCQjdEvG4Liq31MefyqWGl-OQbQvdKGb8uPCVl41RZeVoYU1dcL_auJnHVn-YqaWBxg4nRDXRtUq143AMPKVr6hjMGgoF2O7b2oL-U-NRqLimc3KWOXfdvI8SaPLn5KNRSjeREZfXOILhtl7o1_jU0q4KMmIn6AO67hnRpPQP_qyDlNygG00mAU2YANclJFoWVqIVLFpOILH9S-Se9wyXNEi8h1HlMam-QliHrWM_9WbK7Of6Ez900PfChMU3aasvSOH5tgltccOq-a4lJX4vq3Xgi9taW_jg8GGcRDygLXXIU9m06cR8cJ5x2A
    long long maxSubarraySum(int arr[], int n)
    {

        long long localSum = arr[0], globalSum = arr[0];

        for (int i = 1; i < n; i++)
        {
            localSum = max((long long)arr[i], localSum + arr[i]);
            globalSum = max(globalSum, localSum);
        }

        return globalSum;
    }
};

int main()
{
    int t, n;

    cin >> t;   // input testcases
    while (t--) // while testcases exist
    {

        cin >> n; // input size of array

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i]; // inputting elements of array

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}