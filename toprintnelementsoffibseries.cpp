#include <iostream>
using namespace std;
int fib(int n)
{
    int a = 0;
    // test cases
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    // recursive relation
    return (fib(n - 1) + fib(n - 2));
}

int main()
{
    int n;
    cin >> n;
    int a = fib(n); // idhar minus 1 isliye kiya hai kyonki meri counting in fibonacci series started from 0
    cout << a << endl;
}