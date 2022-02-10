#pragma warning(disable:4996)

#include <stdio.h>
#include <string.h>
#include <conio.h>

/*
    Source by CPlusPlus
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    FILE* filePointer;
    char dataToBeRead[50];

    filePointer = fopen("FilePercobaan.c", "r");

    if (filePointer == NULL) {
        printf("FilePercobaan.c file failed to open.");
    } else {
        printf("The file is now opened.\n");

        while (fgets(dataToBeRead, 50, filePointer) != NULL) {
            printf("%s", dataToBeRead);
        }

        fclose(filePointer);

        printf("Data successfully read from file FilePercobaan.c\n");
        printf("The file is now closed.");
    }

    _getch();
    return 0;
}