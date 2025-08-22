/*
Problem Statement:
Print the following pattern but coming up with a code logic. Keep the
program modular, i.e. The pattern should be print for a given input x.

12345
1234
123
12
1

*/

#include <bits/stdc++.h>
using namespace std;

void linePrinter(int lines)
{
    for (int i = lines; i>0; i--)
    {
        for (int j = 1; j<=i; j++)
        {
            cout <<j;

        }
        cout <<endl;
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
