#include <iostream>
#include <vector>
using namespace std;
void vectors(vector<int> v)
{
    cout << "array will be" << endl;

    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << endl;
    }
}
int main()
{
    vector<int> v;
    // v.push_back(1);
    // v.push_back(1);
    // v.push_back(1);
    // v.push_back(1);
    // v.pop_back(); // by default it will remove the last element pass in the array
    int n;
    cin >> n;
    // inserting an array
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        v.push_back(d);
    }
    vectors(v);
    return 0;
}