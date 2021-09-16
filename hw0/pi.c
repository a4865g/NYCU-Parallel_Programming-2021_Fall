#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    long long int number_in_circle = 0;
    long long int number_of_tosses = 1000000000;
    long long int toss;
    double distance_squared;
    double x, y;
    srand(time(NULL));
    for (toss = 0; toss < number_of_tosses; toss++)
    {
        x = (double)rand() / RAND_MAX * 2.0 - 1.0; //generate random -1 ~ 1
        y = (double)rand() / RAND_MAX * 2.0 - 1.0;
        distance_squared = x * x + y * y;
        if (distance_squared <= 1)
            number_in_circle++;
    }
    double pi_estimate = 4 * number_in_circle / ((double)number_of_tosses);
    printf("%lf", pi_estimate);
    return 0;
}
