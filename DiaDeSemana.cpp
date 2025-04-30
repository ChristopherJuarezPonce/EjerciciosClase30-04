#include <iostream>
using namespace std;

int main()
{
    // Declare the variable for the user's menu choice
    int Option;

    // Display the menu asking the user to choose a number from 1 to 7
    cout << "Select a number from 1 to 7 to know the day of the week:" << endl;
    cout << "Option: ";
    cin >> Option;

    // Determine the day of the week based on the selected number
    switch (Option)
    {
    case 1:
        cout << "The day of the week is Monday." << endl;
        break;
    case 2:
        cout << "The day of the week is Tuesday." << endl;
        break;
    case 3:
        cout << "The day of the week is Wednesday." << endl;
        break;
    case 4:
        cout << "The day of the week is Thursday." << endl;
        break;
    case 5:
        cout << "The day of the week is Friday." << endl;
        break;
    case 6:
        cout << "The day of the week is Saturday." << endl;
        break;
    case 7:
        cout << "The day of the week is Sunday." << endl;
        break;
    default:
        // Handle invalid input outside the range 1–7
        cout << "Invalid option. Please choose a number between 1 and 7." << endl;
        return 1;
        break;
    }

    return 0;
}
