#include <stdio.h>

int main() {
    int n, i;
    float avg_wait_time = 0, avg_turnaround_time = 0;

    // Input the number of processes
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    // Declare arrays for burst time, waiting time, turnaround time, and arrival time
    int burst_time[n], wait_time[n], turnaround_time[n], arrival_time[n];

    // Input arrival times for each process
    printf("Enter arrival times for each process:\n");
    for (i = 0; i < n; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d", &arrival_time[i]);
    }

    // Input burst times for each process
    printf("Enter burst times for each process:\n");
    for (i = 0; i < n; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d", &burst_time[i]);
    }

    // Initialize waiting time for the first process
    wait_time[0] = 0;

    // Calculate waiting time for each process
    for (i = 1; i < n; i++) {
        wait_time[i] = wait_time[i - 1] + burst_time[i - 1];

        // Adjust waiting time based on arrival time
        if (wait_time[i] < arrival_time[i]) {
            wait_time[i] = arrival_time[i];
        }
    }

    // Calculate turnaround time for each process and sum up wait and turnaround times
    for (i = 0; i < n; i++) {
        turnaround_time[i] = wait_time[i] + burst_time[i]; // Turnaround Time = Wait Time + Burst Time
        avg_wait_time += wait_time[i];      // Sum of waiting times
        avg_turnaround_time += turnaround_time[i]; // Sum of turnaround times
    }

    // Calculate averages
    avg_wait_time /= n;
    avg_turnaround_time /= n;

    // Print the results
    printf("\nProcess\tArrival Time\tBurst Time\tWait Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", i + 1, arrival_time[i], burst_time[i], wait_time[i], turnaround_time[i]);
    }

    // Print average waiting and turnaround times
    printf("\nAverage Waiting Time: %.2f", avg_wait_time);
    printf("\nAverage Turnaround Time: %.2f\n", avg_turnaround_time);

    return 0; 
}
