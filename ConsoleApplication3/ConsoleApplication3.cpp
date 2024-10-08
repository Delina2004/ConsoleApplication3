#include <iostream>
#include <string>
#include "gradeAnalyzer.hpp" // Include the header file

using namespace std;

int main() {
    const int SIZE = 5; // Adjust this size based on your class size

    string names[SIZE] = { "John", "Sarah", "David", "Emily", "Paul" };
    int grades[SIZE] = { 85, 92, 78, 88, 91 };
    float average = calculateAverage(grades, SIZE);
    cout << "Average grade: " << average << endl;

    // Find the highest and lowest grades
    int highest = findHighestGrade(grades, SIZE);
    int lowest = findLowestGrade(grades, SIZE);

    cout << "Highest grade: " << highest << endl;
    cout << "Lowest grade: " << lowest << endl;

    // List students who scored above average
    studentsAboveAverage(names, grades, SIZE, average);
    compareStudents(names, grades, SIZE);

    return 0;
}
