#include <stdio.h>
#define WARDS 3
#define BEDS 5
void inputStatus(int beds[WARDS][BEDS]) {
	int i,j;
    for (i = 0; i < WARDS; i++) {
        printf("Enter status for Ward %d (1=occupied, 0=empty):\n", i + 1);
        for (j = 0; j < BEDS; j++) {
            printf("  Bed %d: ", j + 1);
            scanf("%d", &beds[i][j]);
        }
    }
}
void countBeds(int *ptr, int totalBeds, int *occupied, int *empty) {
    *occupied = *empty = 0;
    int i;
    for (i = 0; i < totalBeds; i++) {
        if (*(ptr + i) == 1)
            (*occupied)++;
        else
            (*empty)++;
    }
}
void displayStatus(int beds[WARDS][BEDS]) {
	int i,j;
    printf("\nBed Status:\n");
    for (i = 0; i < WARDS; i++) {
        printf("Ward %d: ", i + 1);
        for (j= 0; j < BEDS; j++) {
            printf("%d ", beds[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int beds[WARDS][BEDS];
    int occupied, empty;

    inputStatus(beds);
    countBeds(&beds[0][0], WARDS * BEDS, &occupied, &empty);
    displayStatus(beds);

    printf("\nOccupied: %d\nEmpty: %d\n", occupied, empty);
    return 0;
}

