#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char x;

    while (true)
    {

        cout << "Basic Calculator " << endl;
        cout << "********************************  " << endl;
        cout << "Enter the Number one " << endl;
        cin >> num1;

        cout << "Enter the Number two " << endl;
        cin >> num2;

        cout << "********************************  " << endl;
        cout << "please select BODMAS Configuration " << endl;
        cout << "********************************  " << endl;

        cout << "Press a for addition " << endl;
        cout << "Press b for subtraction " << endl;
        cout << "Press c for multiplication " << endl;
        cout << "Press d for division " << endl;
        cout << "Press e for remainder " << endl;
        cin >> x;

        if (x == 'a')
        {
            cout << "The Sum is  = " << num1 + num2 << endl;
            cout << "********************************  " << endl;
        }
        else if (x == 'b')
        {
            cout << "The Subtraction is  = " << num1 - num2 << endl;
            cout << "********************************  " << endl;
        }

        else if (x == 'c')
        {
            cout << "The Multiplication is  = " << num1 * num2 << endl;
            cout << "********************************  " << endl;
        }
        else if (x == 'd')
        {
            cout << "The division is  = " << num1 / num2 << endl;
            cout << "********************************  " << endl;
        }
        else if (x == 'e')
        {
            cout << "The Remainder is  = " << num1 % num2 << endl;
            cout << "********************************  " << endl;
        }
        else
            cout << "Invalid Operation " << endl;
        cout << "********************************  " << endl;
    }
    return 0;
}