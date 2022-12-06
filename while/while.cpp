#include <iostream>
#include <string>

using namespace std;

int main() {
    string answer = "yes";
    int number, total, counter;

    total = 0;
    counter = 4;

    while (answer == "yes") {
        cout << "Enter a number: ";
        cin >> number;
        cin.ignore();

        cout << "Do you wish to continue: ";
        getline(cin, answer);

        for (int i = 0; i < answer.length(); i++) {
            answer[i] = tolower(answer[i]);
        }
        total += number;
        counter++;
    }

    cout << "The total is " << total << endl;

    float average = total / counter / 1.0;
    cout << "The average is " << average << endl;

    return 0;
}