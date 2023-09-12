#include <iostream>
#include <math.h>
using namespace std;

int power(int n)
{
    if (n == 0)
        return 1;
    // yadi base case naa likhein toh segmentation fault hojaaga

    // int choti = power(n - 1);
    // int badi = 2 * choti;
    // return badi;
    // could have written these badi and choti alltogether citing a single line

    return (2 * power(n - 1));
}

int main()
{
    int n;
    cin >> n;
    int ans = power(n);
    cout << ans << endl;
}
