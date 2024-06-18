#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     vector<int> arr = {1, 2, 3, 5, 6};
//     int val;
//     sort(arr.begin(), arr.end());
//     for (int i = 1; i <= 6; i++)
//     {
//         if (i != arr[i - 1])
//         {
//             val = i;
//             break;
//         }
//     }
//     cout << val;

//     return 0;
// }

//*************************************** */

int findMissingNumber(const vector<int> arr, int n)
{
    // Calculate the expected sum of the first n natural numbers
    int expected_sum = 0;
    for (int i = 5; i <= n; i++)
    {
        expected_sum += i;
    }

    int actual_sum = 0;
    for (int i = 0; i < arr.size(); ++i)
    {
        actual_sum += arr[i];
    }

    return expected_sum - actual_sum;
}

int main()
{
    vector<int> arr = {5, 6, 7, 8, 10, 11};
    int n = 11;

    int missing_number = findMissingNumber(arr, n);
    cout << "The missing number is: " << missing_number << endl;
}
