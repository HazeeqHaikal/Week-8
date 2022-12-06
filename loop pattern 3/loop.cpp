#include <iostream>
#include <string>

using namespace std;

int main() {
    string symbol;

    for (int i = 1; i <= 5; i++) {
        if (i % 2 == 1) {
            symbol = "@";
        } else {
            symbol = "@@@@@";
        }
        cout << symbol << endl;
    }

    return 0;
}