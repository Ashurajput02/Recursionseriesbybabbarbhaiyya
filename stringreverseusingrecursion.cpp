#include <iostream>
using namespace std;

void printer(string a)
{
    cout << a << endl;
}
string fun(string a, int i, int j)
{
    if (i > j)
        return a;
    else
        swap(a[i], a[j]);

    return (fun(a, i + 1, j - 1));
}
int main()
{
    string a = "ashu";
    int l = 0;
    int r = 3;
    string b = fun(a, l, r);
    cout << b << endl;
}