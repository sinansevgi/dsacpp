/*
Problem Statement:
Print the following pattern but coming up with a code logic. Keep the
program modular, i.e. The pattern should be print for a given input x.

****
*  *
*  *
****

*/

#include <bits/stdc++.h>
using namespace std;

void linePrinter(int lines)
{
    for (int i = 0; i<lines; i++)
    {
    if(i == 0 || i == lines-1){
    cout << string(lines, '*');
    }
    else{
    cout << '*' << string(lines-2, ' ') << '*';
    }

    cout << endl;
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
