#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int numCourses;
    double totalCredits = 0, totalGradePoints = 0;

    cout << "Enter the number of courses: ";
    cin >> numCourses;

    cout << "\n--- Course Details ---\n";
    
    for (int i = 0; i < numCourses; ++i) {
        double grade, credit;
        cout << "\nCourse " << i + 1 << ":\n";
        cout << "Enter grade (e.g. 8.5): ";
        cin >> grade;
        cout << "Enter credit hours: ";
        cin >> credit;

        totalCredits += credit;
        totalGradePoints += grade * credit;

        cout << "Grade: " << grade << ", Credits: " << credit << endl;
    }

    double cgpa = (totalCredits != 0) ? totalGradePoints / totalCredits : 0;
    cout << fixed << setprecision(2);
    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "Final CGPA: " << cgpa << endl;

    return 0;