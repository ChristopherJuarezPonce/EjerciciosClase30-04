#include <iostream>
using namespace std;

int main()
{
    // Declare the variable to store the user's rating
    int Stars;

    // Display the rating options to the user
    cout << "Rate our game" << endl;
    cout << "1. One star" << endl;
    cout << "2. Two stars" << endl;
    cout << "3. Three stars" << endl;
    cout << "4. Four stars" << endl;
    cout << "5. Five stars" << endl;
    cout << "Your rating: ";
    cin >> Stars;

    // Respond based on the number of stars the user selected
    switch (Stars)
    {
    case 1:
        cout << "Thank you for your rating of (" << Stars << "). We'll try to improve :(" << endl;
        break;
    case 2:
        cout << "Thank you for your rating of (" << Stars << "). There's room for improvement." << endl;
        break;
    case 3:
        cout << "Thank you for your rating of (" << Stars << "). We'll add new features!" << endl;
        break;
    case 4:
        cout << "Thank you for your rating of (" << Stars << "). We're glad you enjoyed it!" << endl;
        break;
    case 5:
        cout << "Thank you for your rating of (" << Stars << "). Thanks for being part of our success!" << endl;
        break;
    default:
        // Handle invalid inputs (not between 1 and 5)
        cout << "Invalid value entered." << endl;
        return 1;
        break;
    }

    return 0;
}
