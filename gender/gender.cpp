#include <iostream>
#include <string>

using namespace std;

int main() {
    int femaleCount, maleCount, count, mistake;
    char gender;

    femaleCount = 0;
    maleCount = 0;
    mistake = 0;
    count = 0;

    while (count < 10) {
        cout << "Enter your gender " << count + 1 << " (F, M): ";
        cin >> gender;
        gender = toupper(gender);
        if (gender == 'F') {
            femaleCount++;
        } else if (gender == 'M') {
            maleCount++;
        } else {
            cout << "Invalid gender" << endl;
            mistake++;
        }
        count++;
    }

    cout << "\nMale: " << maleCount << endl;
    cout << "Female: " << femaleCount << endl;
    cout << "Invalid input: " << mistake << endl;

    return 0;
}