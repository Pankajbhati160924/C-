#include <bits/stdc++.h>
using namespace std;

int main()
{
    string result;
    vector<int> arr = {1, 6, 4, 6, 8, 9};
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < arr[i + 1])
        {
            result = "Sorted arr h";
        }
        else
        {
            result = "UnSorted arr h";
        }
    }
}