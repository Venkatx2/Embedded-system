#include <stdio.h>

int main()
{
    int heartRate;
    float temperature;
    int steps;

    printf("=== Wearable Fitness Tracker ===\n");

    printf("Enter Heart Rate (BPM): ");
    scanf("%d", &heartRate);

    printf("Enter Body Temperature (°C): ");
    scanf("%f", &temperature);

    printf("Enter Step Count: ");
    scanf("%d", &steps);

    printf("\n----- Fitness Report -----\n");

    printf("Heart Rate: %d BPM\n", heartRate);
    printf("Body Temperature: %.1f °C\n", temperature);
    printf("Steps: %d\n", steps);

    // Heart Rate Analysis
    if (heartRate < 60)
        printf("Status: Low Heart Rate\n");
    else if (heartRate <= 100)
        printf("Status: Normal Heart Rate\n");
    else
        printf("Status: High Heart Rate\n");

    // Temperature Analysis
    if (temperature > 37.5)
        printf("Temperature Alert: High Body Temperature\n");
    else
        printf("Temperature: Normal\n");

    // Step Analysis
    if (steps >= 10000)
        printf("Fitness Goal Achieved!\n");
    else
        printf("Keep Walking to Reach 10,000 Steps.\n");

    return 0;
}