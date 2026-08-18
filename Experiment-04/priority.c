#include <stdio.h>

int main()
{
    int n, i, j, temp;
    int bt[20], pr[20], wt[20], tat[20];
    float awt = 0, atat = 0;

    printf("Enter Number of Processes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter Burst Time for P%d: ", i + 1);
        scanf("%d", &bt[i]);

        printf("Enter Priority for P%d: ", i + 1);
        scanf("%d", &pr[i]);
    }

    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (pr[i] > pr[j])
            {
                temp = pr[i];
                pr[i] = pr[j];
                pr[j] = temp;

                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;
            }

    wt[0] = 0;

    for (i = 1; i < n; i++)
        wt[i] = wt[i - 1] + bt[i - 1];

    printf("\nProcess\tPriority\tBT\tWT\tTAT\n");

    for (i = 0; i < n; i++)
    {
        tat[i] = wt[i] + bt[i];

        awt += wt[i];
        atat += tat[i];

        printf("P%d\t%d\t\t%d\t%d\t%d\n",
               i + 1, pr[i], bt[i], wt[i], tat[i]);
    }

    printf("\nAverage Waiting Time = %.2f", awt / n);
    printf("\nAverage Turnaround Time = %.2f\n", atat / n);

    return 0;
}
