#include <stdio.h>
#define N 5

int main (void)
{
    int i, j, n;
    char ch;
    int a[N][N], row[N] = {0}, coloumn[N] = {0}, highest[5] = {0}, lowest[5] = {0};
    double average_student[5] = {0}, average_total[5] = {0};

    printf("Note: Add a space after each quiz grade input.\n\n");
    for (i = 0; i < N; i++) {
        printf("Enter 5 quiz grades for student %d: ", i+1);
        for (j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
            row[i] += a[i][j];
        }
        average_student[i] = (double) row[i]/5;
    }

    printf("\nTotal score per student: ");
    for (i = 0; i < N; i++) {
        printf("%d ", row[i]);
    }
    printf("\nAverage score per student: ");
    for (i = 0; i < N; i++) {
        printf("%.2f ", average_student[i]);
    }

    printf("\nAverage score per Quiz: ");
    for (j = 0; j < N; j++) {
        highest [j] = a[0][j];
        lowest [j] = a[0][j];
        for (i = 0; i < N; i++) {
            coloumn[j] += a[i][j];
        }
        average_total[i] = (double) coloumn[j] / 5;
        printf("%.2f ", average_total[i] = (double) coloumn[j] / 5);
    } 

    printf("\nHighest score per testL: ");
    for (j = 0; j < N; j++) {
        highest [j] = a[0][j];
        for (i = 0; i < N; i++) {
            if (a[i][j] >= highest[j]) {
                highest[j] = a[i][j];
            }
        }
        printf("%d ", highest[j]);
    }

    printf("\nLowest score per testL: ");
    for (j = 0; j < N; j++) {
        lowest [j] = a[0][j];
        for (i = 0; i < N; i++) {
            if (a[i][j] <= lowest[j]) {
                lowest[j] = a[i][j];
            }
        }
        printf("%d ", lowest[j]);
    }

    return 0;
}  