#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// int main()
// {
//     int arr[] = {2, 5, 4, 8, 6, 1, 7, 9};

//     int n = sizeof(arr) / sizeof(arr[0]);
//     sort(arr, arr + n);

//     cout << "Sorting Array : ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int n = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, arr + n);
    cout << "Reverse arry : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}