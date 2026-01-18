#include <iostream>
#include <iomanip>
#include "item.h"
#include "history.h"
using namespace std;

void viewHistory(int* id, char name[][20], char color[][20],
                 char location[][20], char date[][15],
                 char reporter[][30], char claimer[][30],
                 char dateReported[][15], char dateClaimed[][15],
                 int* claimed) {

    cout << "\n====================== ITEM HISTORY ========================\n";
    cout << left
         << setw(5)  << "ID"
         << setw(18) << "Item Name"
         << setw(18) << "Reporter"
         << setw(18) << "Claimer"
         << setw(15) << "Reported On"
         << setw(15) << "Claimed On"
         << setw(10) << "Status" << endl;
    cout << "--------------------------------------------------------------------------\n";

    for (int i = 0; i < countItems; i++) {
        cout << setw(5)  << id[i]
             << setw(18) << name[i]
             << setw(18) << reporter[i]
             << setw(18) << claimer[i]
             << setw(15) << dateReported[i]
             << setw(15) << dateClaimed[i]
             << setw(10) << (claimed[i] ? "Claimed" : "Lost") << endl;
    }
}
