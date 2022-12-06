#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int quantity;
    float price, total;
    char customer = 'Y';

    total = 0;

    while (customer == 'Y') {
        cout << "Enter quantity: ";
        cin >> quantity;
        cout << "Enter price: ";
        cin >> price;
        total += quantity * price;
        cout << "Continue for another customer? (Y/N): ";
        cin >> customer;
        customer = toupper(customer);
    }

    cout << fixed << setprecision(2) << "Total paid by all customers: RM" << total << endl;

    return 0;
}