/*
Problem Statement:
Print the following pattern but coming up with a code logic. Keep the
program modular, i.e. The pattern should be print for a given input x.

*
**
***
****
*****

*/

#include <bits/stdc++.h>
using namespace std;

void linePrinter(int lines)
{
    string str = "*";
    for (int i = 1; i<=lines; i++)
    {
        cout << str << endl;
        str += '*';
    }

}

int main()
{
    int lines = 0;
    cout << "Please enter amount of lines you want to :" << endl;
    cin >> lines;
    cout << endl;
    linePrinter(lines);

}
