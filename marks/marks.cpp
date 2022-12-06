#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int marks[3][4];
    int totalMarksForSubject[4] = {0, 0, 0, 0};
    string name[3];

    for (int i = 0; i < sizeof(marks) / sizeof(marks[0]); i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> name[i];
        for (int j = 0; j < sizeof(marks[i]) / sizeof(marks[i][0]); j++) {
            cout << "Enter mark for subject " << j + 1 << ": ";
            cin >> marks[i][j];
        }
    }

    int total[3] = {0, 0, 0};
    float average[3] = {0, 0, 0};
    for (int i = 0; i < sizeof(marks) / sizeof(marks[0]); i++) {
        for (int j = 0; j < sizeof(marks[i]) / sizeof(marks[i][0]); j++) {
            total[i] += marks[i][j];
        }
    }

    

    for (int i = 0; i < sizeof(average) / sizeof(average[0]); i++) {
        average[i] = total[i] / 4.0;
    }

    for (int i = 0; i < sizeof(marks) / sizeof(marks[0]); i++) {
        cout << "\nName: " << name[i] << endl;
        cout << "Total: " << total[i] << endl;
        cout << fixed << setprecision(2) << "Average: " << average[i] << endl;
        cout << fixed << setprecision(2) << "Average for each subject: " << endl;
    }

    return 0;
}