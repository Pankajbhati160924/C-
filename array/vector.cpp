#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> v;
    // cout << "Size : " << v.size() << endl;
    // cout << "Capacity : " << v.capacity() << endl;

    // v.push_back(10);
    // cout << "Size : " << v.size() << endl;
    // cout << "Capacity : " << v.capacity() << endl;

    // v.push_back(2);
    // cout << "size : " << v.size() << endl;
    // cout << "Capacity : " << v.capacity() << endl;

    // v.push_back(3);
    // cout << "size : " << v.size() << endl;
    // cout << "Capacity : " << v.capacity() << endl;

    // v.push_back(4);
    // cout << "size : " << v.size() << endl;
    // cout << "Capacity : " << v.capacity() << endl;

    // v.resize(6);
    // cout << "size : " << v.size() << endl;
    // cout << "Capacity : " << v.capacity() << endl;

    // v.resize(10);
    // cout << "size : " << v.size() << endl;
    // cout << "Capacity : " << v.capacity() << endl;

    // v.resize(8);
    // cout << "size : " << v.size() << endl;
    // cout << "Capacity : " << v.capacity() << endl;

    // v.pop_back(); // pop_back =>  last elemnet remove
    // v.pop_back();

    //***************************************************

    vector<string> v;
    for (int i = 0; i < 3; i++)
    {
        string name;
        cout << "Enter name : ";
        cin >> name;
        v.push_back(name);
    }

    for (int i = 0; i < v.size(); i++)
    {
        int size = v[i].size();
        cout << "size of name is :" << size << endl;
    }
}
