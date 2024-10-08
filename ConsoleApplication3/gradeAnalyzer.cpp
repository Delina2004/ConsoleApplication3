#include "gradeAnalyzer.hpp"
#include <iostream>
using namespace std;

// Calculate the average grade
float calculateAverage(int grades[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += grades[i];
    }
    return static_cast<float>(sum) / size;
}

// Find the highest grade
int findHighestGrade(int grades[], int size) {
    int highest = grades[0];
    for (int i = 1; i < size; i++) {
        if (grades[i] > highest) {
            highest = grades[i];
        }
    }
    return highest;
}

// Find the lowest grade
int findLowestGrade(int grades[], int size) {
    int lowest = grades[0];
    for (int i = 1; i < size; i++) {
        if (grades[i] < lowest) {
            lowest = grades[i];
        }
    }
    return lowest;
}

// List students who scored above average
void studentsAboveAverage(const std::string names[], int grades[], int size, float average) {
    cout << "Students who scored above the average (" << average << "):" << endl;
    for (int i = 0; i < size; i++) {
        if (grades[i] > average) {
            cout << names[i] << " (" << grades[i] << ")" << endl;
        }
    }
}

// Compare students' grades and print the details
void compareStudents(const std::string names[], int grades[], int size) {
    cout << "Comparing student grades:" << endl;
    for (int i = 0; i < size; i++) {
        cout << names[i] << ": " << grades[i] << endl;
    }
}
