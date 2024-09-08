#ifndef REPEAT
#define REPEAT

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

bool isFinish;

bool checkRepeat()
{
    cout << "Enter 1 to repeat the function, 0 to finish" << endl;
    cin >> isFinish;

    if (isFinish) {
        return true;
    }
    else {
        return false;
    }
};
#endif