#include <iostream>
using namespace std;

int main()
{
    // Declare variables for USD amount and conversion result
    float Dollar, Result;
    int Option;

    // Display currency conversion options to the user
    cout << "Select currency conversion: " << endl;
    cout << "1. From USD to EUR" << endl;
    cout << "2. From USD to JPY" << endl;
    cout << "3. From USD to GBP" << endl;
    cout << "Option: ";
    cin >> Option;

    // Ask the user to input the amount in US dollars
    cout << "Enter the amount in USD: ";
    cin >> Dollar;

    // Perform conversion based on selected option
    switch (Option)
    {
    case 1:
        // Convert from USD to EUR
        Result = Dollar * 0.631;
        cout << "The converted amount is: " << Result << " EUR" << endl;
        break;
    case 2:
        // Convert from USD to JPY
        Result = Dollar * 142.87;
        cout << "The converted amount is: " << Result << " JPY" << endl;
        break;
    case 3:
        // Convert from USD to GBP
        Result = Dollar * 8.75;
        cout << "The converted amount is: " << Result << " GBP" << endl;
        break;
    default:
        // Handle invalid option
        cout << "Invalid option selected." << endl;
        return 1;
        break;
    }

    return 0;
}
