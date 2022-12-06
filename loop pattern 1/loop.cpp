#include <iostream>
#include <string>

using namespace std;

int main() {
    string symbol = "*****";
    cout << symbol << endl;

    for (int i = 0; i <= symbol.length() + 1; i++) {
        symbol.erase(symbol.length() - 1, 1);
        cout << symbol << endl;
    }
    return 0;
}