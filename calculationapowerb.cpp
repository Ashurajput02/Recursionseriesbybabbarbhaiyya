#include <iostream>
using namespace std;

int multiply(int a, int b)
{
    if (b == 0)
        return 1;
    else if (b == 1)
        return a;

    int ans = multiply(a, b / 2);

    if (b % 2 == 0)
        ans = ans * ans;
    else
        ans = a * ans * ans;

    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = multiply(a, b);
    cout << ans << endl;
}