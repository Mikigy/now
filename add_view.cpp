#include <iostream>
#include <iomanip>
#include <cstring>
#include "item.h"
#include "add_view.h"
using namespace std;

void addItem(int* id, char name[][20], char color[][20],
             char location[][20], char date[][15],
             char secret[][20], char reporter[][30], char claimer[][30],
             char dateReported[][15], char dateClaimed[][15], int* claimed) {

    cout << "\n====================== ADD LOST ITEM =======================\n";

    id[countItems] = countItems + 1;
    claimed[countItems] = 0;
    strcpy(claimer[countItems], "---");
    strcpy(dateClaimed[countItems], "---");

    cin.ignore();
    cout << left << setw(20) << "Reporter Name:";  cin.getline(reporter[countItems], 30);
    cout << setw(20) << "Item Name:";             cin >> name[countItems];
    cout << setw(20) << "Color:";                 cin >> color[countItems];
    cout << setw(20) << "Location:";              cin >> location[countItems];
    cout << setw(20) << "Date (DD-MM):";          cin >> date[countItems];
    cout << setw(20) << "Date Reported:";         cin >> dateReported[countItems];
    cout << setw(20) << "Secret Mark:";           cin >> secret[countItems];

    countItems++;
    cout << "\nItem added successfully!\n";
}

void viewLostItems(int* id, char name[][20], char color[][20],
                   char location[][20], char date[][15], int* claimed) {

    cout << "\n====================== LOST ITEMS LIST =====================\n";
    cout << left
         << setw(5)  << "ID"
         << setw(20) << "Item Name"
         << setw(15) << "Color"
         << setw(20) << "Location"
         << setw(12) << "Date" << endl;
    cout << "------------------------------------------------------------\n";

    bool any = false;
    for (int i = 0; i < countItems; i++) {
        if (!claimed[i]) {
            cout << setw(5)  << id[i]
                 << setw(20) << name[i]
                 << setw(15) << color[i]
                 << setw(20) << location[i]
                 << setw(12) << date[i] << endl;
            any = true;
        }
    }

    if (!any)
        cout << "No lost items available.\n";
}
