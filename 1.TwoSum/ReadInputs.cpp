#include <iostream>
#include <sstream>
#include <istream>
#include <ostream>
#include <vector>

using namespace std;

int main()
{
    int tmp;
    vector<int> list;
    cout << "Input numbers:" << endl;
    while (cin >> tmp)
        list.push_back(tmp);
    for (auto i : list)
        cout << i << endl;
    cout << "end" << endl;
    list.clear();
    vector<int>().swap(list);
    return 0;
}