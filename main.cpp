#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int total = 0;

    cout << "===== Student Grade Calculator =====\n\n";

    // Marks input
    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];

        total += marks[i];
    }

    // Calculate percentage
    float percentage = total / 5.0;

    cout << "\n===== Result =====\n";
    cout << "Total Marks: " << total << "/500\n";
    cout << "Percentage: " << percentage << "%\n";

    // Grade
    if (percentage >= 90) {
        cout << "Grade: A+\n";
    }
    else if (percentage >= 80) {
        cout << "Grade: A\n";
    }
    else if (percentage >= 70) {
        cout << "Grade: B\n";
    }
    else if (percentage >= 60) {
        cout << "Grade: C\n";
    }
    else if (percentage >= 50) {
        cout << "Grade: D\n";
    }
    else {
        cout << "Grade: F\n";
    }

    return 0;
}