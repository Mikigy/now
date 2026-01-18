#include <iostream>
#include <cctype>
#include "item.h"
using namespace std;

int countItems = 0;

// Convert string to lowercase
void toLower(char* str) {
    for (int i = 0; str[i]; i++)
        str[i] = tolower(str[i]);
}
