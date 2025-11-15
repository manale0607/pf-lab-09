#include <stdio.h>
#define ACC 5
void deposit(float *balance, int index, float amount) {
    *(balance + index) += amount;
}
void withdraw(float *balance, int index, float amount) {
    *(balance + index) -= amount;
}
float averageBalance(float *balance) {
    float sum = 0;
    int i;
    for (i = 0; i < ACC; i++)
        sum += *(balance + i);
    return sum / ACC;
}
int main() {
	int i;
    float balance[ACC];
    for (i = 0; i < ACC; i++) {
        printf("Enter balance for customer %d: ", i + 1);
        scanf("%f", &balance[i]);
    }
    deposit(balance, 0, 1000);
    withdraw(balance, 1, 500);
    printf("\nUpdated Balances:\n");
    for (i = 0; i < ACC; i++)
        printf("Customer %d: %.2f\n", i + 1, balance[i]);
    printf("\nAverage balance: %.2f\n", averageBalance(balance));
    return 0;
}

