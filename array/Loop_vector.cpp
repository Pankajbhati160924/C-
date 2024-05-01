#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v; // size

    // for loop

    for (int i = 0; i < 5; i++)
    {
        int input;
        cout << "Enter your value";
        cin >> input;
        v.push_back(input);

        // cin>>arr[i]   ager asa input lene ho to vector ka size difine krna hota h
    }

    cout << endl;

    for (int i = 0; i <= v.size(); i++)
    {
        cout << v[i] << " ";
    }

    v.insert(v.begin() + 2, 6); //  add krna

    // for each loop*******************

    for (int a : v)
    {
        cout << a << " ";
    }
    cout << endl;

    v.erase(v.end() - 2);

    // while loop

    int idx = 0;
    while (idx < v.size())
    {
        cout << v[idx++] << "    ";
    }
}
