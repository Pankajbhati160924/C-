#include <iostream>
#include <vector>
using namespace std; //  XOR Opereter

int Find_Uniq_value(vector<int> arr)
{
    int value = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        value = value ^ arr[i];
    }
    return value;
}

int main()
{
    vector<int> arr = {1, 1, 3, 4, 4};
    int Uniq_value = Find_Uniq_value(arr);
    cout << Uniq_value << endl;
}