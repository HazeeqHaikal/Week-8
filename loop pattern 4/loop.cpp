#include <iostream>
#include <string>

using namespace std;

int main() {
    string symbol;

    for (int i = 0; i < 5; i++) {
        if (i % 2 == 0) {
            symbol = "#####";
        } else {
            symbol = "@@@@@";
        }
        cout << symbol << endl;
    }

    return 0;
}