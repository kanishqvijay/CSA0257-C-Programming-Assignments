#include <stdio.h>
#include <string.h>

void sort_names(char names[][50], int n, int ascending) {
    char temp[50];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((ascending && strcmp(names[i], names[j]) > 0) || (!ascending && strcmp(names[i], names[j]) < 0)) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

void main() {
    char names[10][50];
    int n;

    printf("Enter the number of names (max 10): ");
    scanf("%d", &n);

    printf("Enter the names:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    int choice;
    printf("Enter 1 to sort names in ascending order, 0 for descending order: ");
    scanf("%d", &choice);

    sort_names(names, n, choice);

    printf("The sorted names are:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
}