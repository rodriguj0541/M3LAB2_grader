// CSC 134
// M3LAB2 - Grader
// Josue Rodriguez
// 1/16/2025

#include <iostream>
using namespace std;

int main() {
    // Variable to store numerical grade
    int grade;

    // Prompt user for input
    cout << "Enter your numerical grade: ";
    cin >> grade;

    // Check for valid input range
    if (grade < 0 || grade > 100) {
        cout << "Error: Please enter a grade between 0 and 100." << endl;
    }
    else {
        char letter; // Variable to store letter grade

        // Determine letter grade using if-else structure
        if (grade >= 90 && grade <= 100) {
            letter = 'A';
        }
        else if (grade >= 80 && grade <= 89) {
            letter = 'B';
        }
        else if (grade >= 70 && grade <= 79) {
            letter = 'C';
        }
        else if (grade >= 60 && grade <= 69) {
            letter = 'D';
        }
        else {
            letter = 'F';
        }

        // Output the result
        cout << "Your letter grade is: " << letter << endl;
    }

    return 0;
}
