#include <iostream>
#include <string>
using namespace std;

const int SIZE = 100;

struct partsType {
    int partNum;
    string partName;
    double price;
    int qty;
};

void inpdata(partsType inventory[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter part number: ";
        cin >> inventory[i].partNum;

        cout << "Enter part name: ";
        cin.ignore();
        getline(cin, inventory[i].partName);

        cout << "Enter price: ";
        cin >> inventory[i].price;

        cout << "Enter quantity: ";
        cin >> inventory[i].qty;

        cout << endl;
    }
}

void outdata(partsType inventory[], int n) {
    cout << "\nInventory Data\n";
    for (int i = 0; i < n; i++) {
        cout << "Part " << i + 1 << endl;
        cout << "Number: " << inventory[i].partNum << endl;
        cout << "Name: " << inventory[i].partName << endl;
        cout << "Price: " << inventory[i].price << endl;
        cout << "Quantity: " << inventory[i].qty << endl;
        cout << endl;
    }
}

int main() {
    partsType inventory[SIZE];
    int count;

    cout << "How many parts to enter (max 100): ";
    cin >> count;

    if (count > SIZE) count = SIZE;

    inpdata(inventory, count);
    outdata(inventory, count);

    return 0;
}