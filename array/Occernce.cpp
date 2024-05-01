#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(6);

    for (int i = 0; i < 6; i++)
    {
        cout << "Enter value : ";
        cin >> v[i];
    }

    int x;
    cout << "Enter X value : ";
    cin >> x;

    int position;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            position = i;
        }
        cout << position;
    }
}