#include <iostream>
#include <iomanip>
#include <cstring>
#include "item.h"
#include "search_claim.h"
using namespace std;

void searchItem(char name[][20], char color[][20],
                char location[][20], char date[][15], int* claimed) {

    char search[20], temp[20];
    bool found = false;

    cout << "\nEnter item name to search: ";
    cin >> search;
    toLower(search);

    cout << "\n===================== SEARCH RESULTS =======================\n";

    for (int i = 0; i < countItems; i++) {
        if (!claimed[i]) {
            strcpy(temp, name[i]);
            toLower(temp);

            if (strstr(temp, search)) {
                cout << left
                     << setw(15) << "Item Name:" << name[i] << endl
                     << setw(15) << "Color:"     << color[i] << endl
                     << setw(15) << "Location:"  << location[i] << endl
                     << setw(15) << "Date:"      << date[i] << endl
                     << setw(15) << "Status:"    << "Lost" << endl;
                cout << "------------------------------------------------------------\n";
                found = true;
            }
        }
    }

    if (!found)
        cout << "No matching item found.\n";
}

void claimItem(int* id, char secret[][20], char claimer[][30],
               char dateClaimed[][15], int* claimed) {

    int searchId;
    char userSecret[20];

    cout << "\nEnter Item ID to claim: ";
    cin >> searchId;

    for (int i = 0; i < countItems; i++) {
        if (id[i] == searchId && !claimed[i]) {

            cout << "Enter secret mark: ";
            cin >> userSecret;

            if (strcmp(secret[i], userSecret) == 0) {
                cin.ignore();
                cout << "Claimer Name: ";
                cin.getline(claimer[i], 30);
                cout << "Date Claimed (DD-MM): ";
                cin >> dateClaimed[i];

                claimed[i] = 1;
                cout << "\nItem claimed successfully!\n";
            } else {
                cout << "\nIncorrect secret mark.\n";
            }
            return;
        }
    }

    cout << "\nInvalid ID or item already claimed.\n";
}
