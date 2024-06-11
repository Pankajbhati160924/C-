#include <iostream>
#include <vector>
using namespace std;

// int getInfo(int arr[], int start, int end, int target_value)
// {
//     int mid_value = (start + end) / 2;
//     while (start <= end)
//     {
//         if (arr[mid_value] == target_value)
//         {
//             return mid_value;
//         }
//         else if (arr[mid_value] < target_value)
//         {
//             start = mid_value + 1;
//         }
//         else
//         {
//             end = mid_value - 1;
//         }
//         mid_value = (start + end) / 2;
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int start = 0;
//     int end = 6;
//     int target_value = 6;

//     // cout << mid_value;
//     int find_value = getInfo(arr, start, end, target_value);
//     if (find_value == -1)
//     {
//         cout << "value not found" << endl;
//     }
//     else
//     {
//         cout << "value of index : " << find_value << endl
//              << "Find value : " << arr[find_value] << endl;
//     }
// }

//********************  Vector se ***************************

int getInfo(vector<int> arr, int start, int end, int target)
{

    int mid_value = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid_value] == target)
        {
            return mid_value;
        }
        else if (arr[mid_value] < target)
        {
            start = mid_value + 1;
        }
        else
        {
            end = mid_value - 1;
        }
        mid_value = (start + end) / 2;
    }
    return -1;
}

int main()
{
    vector<int> arr(8);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Enter your Arr Value : ";
        cin >> arr[i];
    }

    int target;
    cout << "Enter your Target Value : ";
    cin >> target;

    int start = 0;
    int end = arr.size() - 1;

    int find_value = getInfo(arr, start, end, target);

    if (find_value == -1)
    {
        cout << "Your Value Is Not Find ";
    }
    else
    {
        cout << "index Value : " << find_value << endl
             << " Your find value : " << arr[find_value];
    }
}
