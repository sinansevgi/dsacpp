/*
Problem Statement:
Print the following pattern but coming up with a code logic. Keep the
program modular, i.e. The pattern should be print for a given input x.

4444444
4333334
4322234
4321234
4322234
4333334
4444444

*/

#include <bits/stdc++.h>
using namespace std;

void linePrinter(int lines)
{
    int size = 2 * lines - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int distFromTop = i;
            int distFromBottom = size - 1 - i;
            int distFromLeft = j;
            int distFromRight = size - 1 - j;

            int minDistToEdge = distFromTop;
            if (distFromBottom < minDistToEdge) minDistToEdge = distFromBottom;
            if (distFromLeft < minDistToEdge) minDistToEdge = distFromLeft;
            if (distFromRight < minDistToEdge) minDistToEdge = distFromRight;

            int value = lines - minDistToEdge;

            cout << value;
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
//TEST COMMIT