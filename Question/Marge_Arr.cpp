#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter your First value : ";
    cin >> x;
    cout << "Enter your Second value : ";
    cin >> y;

    cout << "***********First value user input ************ " << endl;

    vector<int> arr(x);
    vector<int> arr2(y);
    vector<int> Marge_Vector_arr;

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
        Marge_Vector_arr.push_back(arr[i]);
    }

    cout << endl
         << "***********second value user input ************ " << endl;

    for (int i = 0; i < arr2.size(); i++)
    {
        cin >> arr2[i];
        Marge_Vector_arr.push_back(arr2[i]);
    }

    cout << "******** Marge  Two Arr ^^^^^^^^^^^^^^^^^^ " << endl;

    for (int i = 0; i < Marge_Vector_arr.size(); i++)
    {
        cout << Marge_Vector_arr[i];
    }
}