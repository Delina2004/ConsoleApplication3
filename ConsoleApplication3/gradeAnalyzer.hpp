#ifndef GRADEANALYZER_HPP
#define GRADEANALYZER_HPP

#include <string>

float calculateAverage(int grades[], int size);
int findHighestGrade(int grades[], int size);
int findLowestGrade(int grades[], int size);
void studentsAboveAverage(const std::string names[], int grades[], int size, float average);
void compareStudents(const std::string names[], int grades[], int size);

#endif // GRADEANALYZER_HPP
