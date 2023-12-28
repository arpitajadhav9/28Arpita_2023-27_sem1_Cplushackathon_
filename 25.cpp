#include <iostream>
using namespace std;

int main() {
    int Mark; // Declare an integer variable to store the student's marks.
    cout << "Enter your Marks "; // Display a message to prompt the user to enter their marks.
    cin >> Mark; // Read the user's input and store it in the 'Mark' variable.

    if (Mark >= 90) { // Check if the marks are greater than or equal to 90.
        cout << "Grade : A"; // If the condition is true, display "Grade : A" indicating the highest grade.
    } else if (Mark >= 80) { // If the previous condition is false, check if the marks are greater than or equal to 80.
        cout << "Grade : B"; // If this condition is true, display "Grade : B."
    } else if (Mark >= 50) { // If the previous conditions are false, check if the marks are greater than or equal to 50.
        cout << "Grade : C"; // If this condition is true, display "Grade : C."
    } else if (Mark >= 33) { // If the previous conditions are false, check if the marks are greater than or equal to 33.
        cout << "Grade : D"; // If this condition is true, display "Grade : D."
    } else { // If none of the previous conditions are true, meaning the marks are less than 33.
        cout << "Better Luck Next Time"; // Display a message indicating that the student should try again next time.
    }

    return 0; // Return 0 to indicate successful program execution.
}
