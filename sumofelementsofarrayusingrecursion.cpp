#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fun(int arr[], int n)
{
    if (n < 0)
        return 0;

    return (arr[n] + fun(arr, n - 1));
}

int main()
{
    int arr[4] = {1, 2, 3, 4};
    int sum = fun(arr, 3);
    cout << "the sum is =" << sum << endl;
}