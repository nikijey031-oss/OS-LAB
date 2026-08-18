#include <stdio.h>

int main()
{
    int n, tq, i, time = 0, done;
    int bt[20], rem[20], wt[20] = {0}, tat[20];
    float awt = 0, atat = 0;

    printf("Enter Number of Processes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter Burst Time for P%d: ", i + 1);
        scanf("%d", &bt[i]);
        rem[i] = bt[i];
    }

    printf("Enter Time Quantum: ");
    scanf("%d", &tq);

    do
    {
        done = 1;

        for (i = 0; i < n; i++)
        {
            if (rem[i] > 0)
            {
                done = 0;

                if (rem[i] > tq)
                {
                    time += tq;
                    rem[i] -= tq;
                }
                else
                {
                    time += rem[i];
                    wt[i] = time - bt[i];
                    rem[i] = 0;
                }
            }
        }
    } while (!done);

    printf("\nProcess\tBT\tWT\tTAT\n");

    for (i = 0; i < n; i++)
    {
        tat[i] = bt[i] + wt[i];

        awt += wt[i];
        atat += tat[i];

        printf("P%d\t%d\t%d\t%d\n",
               i + 1, bt[i], wt[i], tat[i]);
    }

    printf("\nAverage Waiting Time = %.2f", awt / n);
    printf("\nAverage Turnaround Time = %.2f\n", atat / n);

    return 0;
}
