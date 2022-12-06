#include <iostream>
#include <string>

using namespace std;

int main() {
    string symbol = "*";
    cout << symbol << endl;

    for (int i = 0; i < 5; i++) {
        symbol.push_back('*');
        cout << symbol << endl;
    }
    return 0;
}