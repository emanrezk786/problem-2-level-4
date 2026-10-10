#include <iostream>

using namespace std;

bool IsLeapYear(short Year)
{
    if (Year % 400 == 0)
    {
        return true;
    }

    else if (Year % 100 == 0)
    {
        return false;
    }

    else if (Year % 4 == 0)
    {
        return true;
    }

    else
    {
        return false;
    }

}

short ReadYear()
{
    short Year;
    cout << "\n Please Enter a Year To Check ?";
    cin >> Year;
    return Year;
}

int main()
{
    short Year = ReadYear();


    if (IsLeapYear(Year))
        cout << "\n Yes, Year [" << Year << "] is a Leap Year. \n";
    else
        cout << "\n NO, Year [" << Year << "] is NOT a Leap Year. \n";

    return 0;
}

