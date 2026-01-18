#ifndef SEARCH_CLAIM_H
#define SEARCH_CLAIM_H

void searchItem(char name[][20], char color[][20], char location[][20],
                char date[][15], int* claimed);

void claimItem(int* id, char secret[][20], char claimer[][30],
               char dateClaimed[][15], int* claimed);

#endif
