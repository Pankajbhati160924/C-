#include <iostream>
#include <vector>
using namespace std;

// void Sort(vector<int> &vec)
// {
//     int n = vec.size();
//     for (int i = 0; i < n - 1; ++i)
//     {
//         for (int j = 0; j < n - i - 1; ++j)
//         {
//             if (vec[j] > vec[j + 1])
//             {
//                 int temp = vec[j];
//                 vec[j] = vec[j + 1];
//                 vec[j + 1] = temp;
//             }
//         }
//     }
// }

// int main()
// {
//     int arr[] = {0, 2, 0, 1, 2, 0, 1, 1, 2};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     vector<int> vec(arr, arr + n);
//     Sort(vec);

//     for (int i = 0; i < n; ++i)
//     {
//         arr[i] = vec[i];
//     }

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; ++i)
//     {
//         cout << arr[i] << " ";
//     }
// }

///**************************************************** */

int main()
{

    vector<int> arr = {0, 2, 0, 1, 2, 1, 0, 2, 1, 0};
    int zero, one, two;
    zero = one = two = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }
    cout << "value of zero : " << zero << endl;
    cout << "value of zero : " << one << endl;
    cout << "value of zero : " << two << endl;

    int i = 0;
    while (zero--)
    {
        arr[i] = 0;
        i++;
    }
    while (one--)
    {
        arr[i] = 1;
        i++;
    }
    while (two--)
    {
        arr[i] = 3;
        i++;
    }
    for (auto i : arr)
    {
        cout << i << "  ";
    }
}