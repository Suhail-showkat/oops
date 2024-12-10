#include <iostream>
using namespace std;

int main()
{
    const int NUM_SUBJECTS = 5;
    double marks[NUM_SUBJECTS];
    double totalMarks = 0;
    int failCount = 0;
    double percentage;
    char grade;

    for (int i = 0; i < NUM_SUBJECTS; i++)
    {
        cout << "Enter marks for subject " << (i + 1) << ": ";
        cin >> marks[i];

        if (marks[i] < 0 || marks[i] > 100)
        {
            cout << "Invalid marks entered! Marks should be between 0 and 100." << endl;
            return 1;
        }

        if (marks[i] < 40)
        {
            failCount++;
        }

        totalMarks += marks[i];
    }

    if (failCount > 1)
    {
        cout << "Result: Repeat Year" << endl;
    }
    else
    {

        percentage = (totalMarks / (NUM_SUBJECTS * 100)) * 100;

        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 80)
            grade = 'B';
        else if (percentage >= 60)
            grade = 'C';
        else if (percentage >= 50)
            grade = 'D';
        else
            grade = 'F';

        cout << "Total Marks: " << totalMarks << "/500" << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;
    }

    return 0;
}
