#include <stdio.h>
#define ROWS 3
#define COLS 20
void replaceVowels(char arr[ROWS][COLS]) {
    char *p = &arr[0][0];
    int i;
    for (i = 0; i < ROWS * COLS; i++) {
        char ch = *(p + i);
        if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
            ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            *(p + i) = '*';
    }
}
int main() {
	int i;
    char arr[ROWS][COLS];
    printf("Enter 3 strings:\n");
    for (i = 0; i < ROWS; i++)
        scanf("%s", arr[i]);
    replaceVowels(arr);
    printf("\nAfter replacing vowels:\n");
    for (i = 0; i < ROWS; i++)
        printf("%s\n", arr[i]);
    return 0;
}

