#include <iostream>
#include <string>

using namespace std;

void pass_vars(int *x, int y)
{
    *x = 20;
    y = 30;
}

int main(void)
{
    int x = 0, y = 0;
    int *a = &x;

    pass_vars(&x, y);
    cout << x << " " << y << endl;
    cout << *a << endl;
    return 0;
}
