#include <header.h>

bool numberDigits()
{
    int number;

    cout << "Enter the variable's value: " << endl;
    cin >> number;

    cout << (int)(number / pow(10, 7)) % 10 << " ";
    cout << (int)(number / pow(10, 6)) % 10 << " ";
    cout << (int)(number / pow(10, 5)) % 10 << " ";
    cout << (int)(number / pow(10, 4)) % 10 << " ";
    cout << (int)(number / pow(10, 3)) % 10 << " ";
    cout << (int)(number / pow(10, 2)) % 10 << " ";
    cout << (int)(number / pow(10, 1)) % 10 << " ";
    cout << (int)(number / pow(10, 0)) % 10 << endl;

    return checkRepeat();
}

bool numberLadder()
{
    int num;

    cout << "Enter the variable's value: " << endl;
    cin >> num;

    cout << (int)(num / pow(10, 7)) << endl;
    cout << (int)(num / pow(10, 6)) << endl;
    cout << (int)(num / pow(10, 5)) << endl;
    cout << (int)(num / pow(10, 4)) << endl;
    cout << (int)(num / pow(10, 3)) << endl;
    cout << (int)(num / pow(10, 2)) << endl;
    cout << (int)(num / pow(10, 1)) << endl;
    cout << (int)(num / pow(10, 0)) << endl;

    return checkRepeat();
}

bool expirationDate()
{
    int yearOfProduction;
    int expirationDate;

    cout << "Enter cage's production date: " << endl;
    cin >> yearOfProduction;
    cout << "Enter cage's expiration date: " << endl;
    cin >> expirationDate;

    cout << "The cage will be decommissioned in " << yearOfProduction + expirationDate << endl;

    return checkRepeat();
}

bool checkIntervals()
{
    double x;

    cout << "Enter x: " << endl;
    cin >> x;

    //(x > -12 && x < 0) ? cout << "Belong" : (x == 1) ? cout << "Belong" : (x >= 4 && x <= 8) ? cout << "Belong" : (12 < x <= 48) ? cout << "Belong" : cout << "Not belong";

    if (x > -12 && x < 0) {
        cout << "Belong" << endl;
    }
    else if (x == 1) {
        cout << "Belong" << endl;
    }
    else if (x >= 4 && x <= 8) {
        cout << "Belong" << endl;
    }
    else if (x > 12 && x <= 48) {
        cout << "Belong" << endl;
    }
    else {
        cout << "Not belong" << endl;
    }

    return checkRepeat();
}

bool calculator()
{
    double firstNumber;
    double secondNumber;
    int actionNumber;
    double result = 0;

    cout << "Enter 2 numbers" << endl;;
    cin >> firstNumber;
    cin >> secondNumber;

    cout << "Which operation do you want to do?" << endl;
    cout << " 1 - Addition" << endl;
    cout << " 2 - Subtraction" << endl;
    cout << " 3 - Multiplication" << endl;
    cout << " 4 - Division" << endl;
    cout << " 5 - Exponentiation" << endl;
    cout << " 6 - The logarithm of the base a of the number b" << endl;
    cin >> actionNumber;

    if (actionNumber == 1) {
        result = firstNumber + secondNumber;
    }
    else if (actionNumber == 2) {
        result = firstNumber - secondNumber;
    }
    else if (actionNumber == 3) {
        result = firstNumber * secondNumber;
    }
    else if (actionNumber == 4) {
        result = firstNumber / secondNumber;
    }
    else if (actionNumber == 5) {
        result = pow(firstNumber, secondNumber);
    }
    else if (actionNumber == 6) {
        result = log(secondNumber) / log(firstNumber);
    }
    else {
        cout << "Unknown action" << endl;

        return checkRepeat();
    }

    // Задача 6
    if (result <= 4 * pow(10, 6)) {
        cout << fixed << setprecision(5) << result << endl;
    }
    else {
        cout << "Sorry, result is to big!";
    }

    return checkRepeat();
}

int main()
{
    bool repeat;

    // Задача 1 - вывод значения каждого разряда
    do
    {
        repeat = numberDigits();
    } while (repeat);

    // Задача 2 - значения лесенкой
    do
    {
        repeat = numberLadder();
    } while (repeat);

    // Задача 3 - 'годен до'
    do
    {
        repeat = expirationDate();
    } while (repeat);

    // Задача 4 - принадлежность промежуткам
    do
    {
        repeat = checkIntervals();
    } while (repeat);
    
    // Задача 5 и 6 - калькулятор
    do
    {
        repeat = calculator();
    } while (repeat);

    return 0;
}
