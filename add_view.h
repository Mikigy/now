#ifndef ADD_VIEW_H
#define ADD_VIEW_H

void addItem(int* id, char name[][20], char color[][20], char location[][20], char date[][15],
             char secret[][20], char reporter[][30], char claimer[][30],
             char dateReported[][15], char dateClaimed[][15], int* claimed);

void viewLostItems(int* id, char name[][20], char color[][20], char location[][20],
                   char date[][15], int* claimed);

#endif
