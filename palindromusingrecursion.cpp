#include <iostream>
#include <string>
using namespace std;
bool palindrome(string &arr, int i, int j)
{
    if (i == j)
        return true;

    else if (arr[i] != arr[j])
        return false;
    return (palindrome(arr, i + 1, j - 1));
}

int main()
{
    string a = "kanak";
    bool p = palindrome(a, 0, 4);
    cout << p << endl;
}