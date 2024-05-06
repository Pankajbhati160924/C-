#include <iostream>
#include <vector>
using namespace std;

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     vector<int> arr2 = {3, 4};

//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = 0; j < arr2.size(); j++)
//         {
//             if (arr[i] == arr2[j])
//             {
//                 cout << "Meching number : " << arr[i] << endl;
//             }
//         }
//     }
// }

// *************************** Function se  ****************************************

void getInfo(vector<int> a, vector<int> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if (a[i] == b[j])
            {
                cout << "Meching number : " << a[i] << endl;
            }
        }
    }
}
int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> arr2 = {1, 1, 4};
    getInfo(arr, arr2);
}
