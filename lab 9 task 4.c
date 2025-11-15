#include <stdio.h>
#define ROW 3
#define COL 3
void searchElement(int *ptr, int rows, int cols, int key) {
	int i,j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (*(ptr + i * cols + j) == key) {
                printf("Element %d found at Row %d, Column %d\n", key, i, j);
                return;
            }
        }
    }
    printf("Element not found.\n");
}
int main() {
    int arr[ROW][COL] = {{1,2,3},{4,5,6},{7,8,9}};
    int key;
    printf("Enter element to search: ");
    scanf("%d", &key);
    searchElement(&arr[0][0], ROW, COL, key);
    return 0;
}

