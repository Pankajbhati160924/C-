#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2, 3, 6, 2, 3, 3, 4, 9, 5, 2};
    sort(arr.begin(), arr.end());
    for (auto a : arr)
    {
        cout << a << " ";
    }
    cout << endl;

    int count = 0;
    cout << "Dupalicat Value : ";
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[j] << " ";
            }
        }
    }
}
