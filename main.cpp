#include <iostream>
#include "item.h"
#include "add_view.h"
#include "search_claim.h"
#include "history.h"

using namespace std;

int main() {
    int id[MAX], claimed[MAX] = {0};

    char name[MAX][20], color[MAX][20], location[MAX][20];
    char date[MAX][15], secret[MAX][20];
    char reporter[MAX][30], claimer[MAX][30];
    char dateReported[MAX][15], dateClaimed[MAX][15];

    int choice;

    do {
        cout << "\n============================================================\n";
        cout << "              LOST AND FOUND MANAGEMENT SYSTEM              \n";
        cout << "============================================================\n";
        cout << "  1. Add Lost Item\n";
        cout << "  2. View Lost Items\n";
        cout << "  3. Search Item\n";
        cout << "  4. Claim Item\n";
        cout << "  5. View Full History\n";
        cout << "  6. Exit\n";
        cout << "------------------------------------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addItem(id, name, color, location, date, secret,
                        reporter, claimer, dateReported, dateClaimed, claimed);
                break;

            case 2:
                viewLostItems(id, name, color, location, date, claimed);
                break;

            case 3:
                searchItem(name, color, location, date, claimed);
                break;

            case 4:
                claimItem(id, secret, claimer, dateClaimed, claimed);
                break;

            case 5:
                viewHistory(id, name, color, location, date,
                            reporter, claimer, dateReported, dateClaimed, claimed);
                break;

            case 6:
                cout << "\nThank you for using the system. Goodbye!\n";
                break;

            default:
                cout << "\nInvalid choice. Try again.\n";
        }

    } while (choice != 6);

    return 0;
}
