#include <iostream>
#include <string>

using namespace std;

int main() {
    string subName;
    string studName;
    float marks;
    float average;

    for (int subject = 1; subject <= 4; subject++) {  // outer loop

        cout << "Subject name: ";
        getline(cin, subName);
        int total = 0;

        for (int stud = 1; stud <= 3; stud++) {  // inner loop
            cout << "Student name " << stud << " : ";
            getline(cin, studName);
            cout << "Marks: ";
            cin >> marks;
            cin.ignore();
            total += marks;
        }
        average = total / 3.0;
        cout << "Average for " << subName << " is: " << average << endl;
    }

    cout << studName;

    return 0;
}
