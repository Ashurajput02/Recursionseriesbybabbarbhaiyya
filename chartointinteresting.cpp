#include <iostream>
using namespace std;
int main()
{
    char a = '5';
    int i = a;
    cout << "the value of a before type casting = " << i << endl;
    int j = (int)a;
    cout << "the value of a after type casting= " << j << endl;
    int k = a - '0';
    cout << "the value of a after using a short trick to convert a into int without falling prey to its ASCII value= " << k << endl;
}

// string checkstring(string input)
// {
//     static int i = 0;
//     if (i == 2)
//         return input;
//     else
//     {
//         input = "ash";
//         checkstring(input);
//     }
//     return input;
// }
// int main()
// {
//     string ans = checkstring("ASHURAJPUT");
//     cout << ans << endl;
// }
