#include <iostream>
#include <vector>
#include <string>

using namespace std;

string convert(string s, int numRows)
{
    int n = s.length();
    int j = 0;
    int step = 2 * numRows - 2;
    string newStr(n, '\0');
    for (int i = 0; i < numRows; ++i)
    {
        while((step * j + i) < n)
        {
            newStr[j] = s[step * j + i];
            if (i != 0 && i != numRows - 1)
            {
                ++j;
                newStr[j] = s[step * j - i];
            }
            ++j;
        }
    }
    return newStr;
}