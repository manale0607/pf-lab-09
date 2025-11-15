#include <stdio.h>
#define STUDENTS 4
#define CLASSES 5
void inputAttendance(int a[STUDENTS][CLASSES]) {
	int i,j;
    for (i = 0; i < STUDENTS; i++) {
        printf("Enter attendance for student %d (1=present, 0=absent):\n", i + 1);
        for (j = 0; j < CLASSES; j++)
            scanf("%d", &a[i][j]);
    }
}
void calculatePercentage(int *ptr) {
	int i,j;
    for (i = 0; i < STUDENTS; i++) {
        int total = 0;
        for (j = 0; j < CLASSES; j++)
            total += *(ptr + i * CLASSES + j);
        float percent = (total / (float)CLASSES) * 100;
        printf("Student %d: %.1f%%\n", i + 1, percent);
        if (percent < 75)
            printf("Warning: Below 75%% attendance!\n");
    }
}
int main() {
    int a[STUDENTS][CLASSES];
    inputAttendance(a);
    calculatePercentage(&a[0][0]);
    return 0;
}

