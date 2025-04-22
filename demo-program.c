#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    int n, bt[20], wt[20], tat[20], avwt = 0, avtat = 0, i, j;
    printf("Enter total number of processes (maximum 20):");
    scanf("%d", &n);
    printf("\nEnter process Burst Time\n");
    for (i = 0; i < n; i++)
    {
        printf("P[%d]:", i + 1);
        scanf("%d", &bt[i]);
    }
}

