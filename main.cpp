#include "Big_number.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    char key, operation;
    cout << "Table convension press: T\n"
         "String convension press: S\n"
         "Exit press: Q\n";
    cin >> key;

    switch (key)
    {
    case 'T':
    {
        break;
    }

    case 'S':
    {
        string str_ulli_number;
        cout << "Give first number\n";
        cin >> str_ulli_number;
        cout << "\n Number I: " << str_ulli_number << endl;
        Big_number number1(str_ulli_number);

        cout << "Give second number\n";
        cin >> str_ulli_number;
        cout << "\n Number II: " << str_ulli_number << endl;
        Big_number number2(str_ulli_number);

        /*cout << "Add press: A\n"
            "Subtract press: S\n"
            "Multiply press: M\n";
        switch (operation)
        {
        case 'A':
        {
            Big_number number3(number1 + number2);
            cout << "\n Added number: " << number3.get_string_number();
            break;
        }
        }*/
        Big_number number3(number1 * number2);
        cout<< number3.get_string_number()<<endl;
        break;
    }

    case 'Q':
        return 0;
    }

    return 0;
}
