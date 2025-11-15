#include <stdio.h>
#define PLAYERS 11
void inputRuns(int *runs) {
	int i;
    for (i = 0; i < PLAYERS; i++) {
        printf("Enter runs for player %d: ", i + 1);
        scanf("%d", runs + i);
    }
}
int totalRuns(int *runs) {
    int i,total = 0;
    for (i = 0; i < PLAYERS; i++)
        total += *(runs + i);
    return total;
}
float averageRuns(int total) {
    return total / (float)PLAYERS;
}
void highestScorer(int *runs) {
    int i,max = *runs, index = 0;
    for (i = 1; i < PLAYERS; i++) {
        if (*(runs + i) > max) {
            max = *(runs + i);
            index = i;
        }
    }
    printf("Highest scorer: Player %d with %d runs\n", index + 1, max);
}
int main() {
    int runs[PLAYERS];
    inputRuns(runs);
    int total = totalRuns(runs);
    printf("\nTotal Runs: %d\n", total);
    printf("Average Runs: %.2f\n", averageRuns(total));
    highestScorer(runs);
    return 0;
}

