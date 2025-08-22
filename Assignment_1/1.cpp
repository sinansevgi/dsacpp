/*
Problem Statement:
Write a program that takes a student's marks in three subjects: Math,
Physics, and Chemistry. Each subject is graded out of 100. Based on these
marks, the program should calculate and print the student's final grade as
a percentage, along with a pass/fail status and a letter grade.

Constraints & Grading Policy:
• Passing Criteria: A student passes if they score at least 40 in each subject.
  If they fail even one subject, their status is "Fail," and their letter grade is "F."
• Final Percentage: Calculate the average of the three subjects.
• Letter Grades:
    o A: Final percentage ≥90
    o B: 80 ≤ Final percentage < 90
    o C: 70 ≤ Final percentage < 80
    o D: 60 ≤ Final percentage < 70
    o F: Final percentage < 60 or if the student has failed a subject.
*/

#include <bits/stdc++.h>
using namespace std;

string getLetterGrade(double grade)
{
    if (grade >= 90)
    {
        return "A";
    }
    else if (grade >= 80)
    {
        return "B";
    }
    else if (grade >= 70)
    {
        return "C";
    }
    else if (grade >= 60)
    {
        return "D";
    }
    else
    {
        return "F";
    }
}

string isPassed (double math, double physics, double chemistry)
{
    if (math > 40 && physics > 40 && chemistry > 40)
    {
        return "Passed";
    }
    else
    {
        return "Failed";
    }
}

int main()
{
    double math, physics, chemistry;
    cout << "Enter marks for Math: ";
    cin >> math;
    cout << "Enter marks for Physics: ";
    cin >> physics;
    cout << "Enter marks for Chemistry: ";
    cin >> chemistry;


    double percentage = (math + physics + chemistry) / 3.0;

    string grade = getLetterGrade(percentage);
    string passStatus = isPassed(math, physics, chemistry);
    if( math < 40 || chemistry < 40 || physics < 40)
    {
        passStatus = "Failed";
        grade = "F";
    }

    cout << endl << "Final Percentage: " << percentage << "%" << endl;
    cout << "Status: " << passStatus << endl;
    cout << "Letter Grade: " << grade << endl;

}
