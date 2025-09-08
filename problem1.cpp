#include <iostream>
#include <string>
using namespace std;
struct Medicine {
    string name;
    string batchNumber;
    int quantity;
    double price;
    string expiryDate;
};

void addMedicine(Medicine& med) {
    cout << "Enter Medicine Name: ";
    cin >> med.name;

    cout << "Enter Batch Number: ";
    cin >> med.batchNumber;

    cout << "Enter Quantity: ";
    cin >> med.quantity;

    cout << "Enter Price: ";
    cin >> med.price;

    cout << "Enter Expiry Date (DD/MM/YYYY): ";
    cin >> med.expiryDate;

    cout << "\nMedicine data recorded successfully.\n";
}

void displayMedicine(const Medicine med) {
    cout << "\n--- Medicine Details ---\n";
    cout << "Name: " << med.name << "\n";
    cout << "Batch Number: " << med.batchNumber << "\n";
    cout << "Quantity: " << med.quantity << "\n";
    cout << "Price: " << med.price << "\n";
    cout << "Expiry Date: " << med.expiryDate << "\n";
}

int main() {
    Medicine myMedicine;
    char choice;

    cout << "Do you want to add medicine data? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        addMedicine(myMedicine);
        displayMedicine(myMedicine);
    } else {
        cout << "No data will be recorded.\n";
    }

    return 0;

}
