#include <stdio.h>
void printData(void *ptr, char type) {
    if (type == 'i')
        printf("%d\n", *(int *)ptr);
    else if (type == 'f')
        printf("%.2f\n", *(float *)ptr);
    else if (type == 'c')
        printf("%c\n", *(char *)ptr);
}
int main() {
    int id = 101;
    float price = 250.75;
    char category = 'A';
    printData(&id, 'i');
    printData(&price, 'f');
    printData(&category, 'c');
    return 0;
}

