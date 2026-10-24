#include <stdio.h>
#include <math.h>
#define PI 3.1415
int main()
{

    long long R, L;

    scanf("%lld %lld", &R, &L);

    double volume_of_balloon = (4.0 / 3.0) * PI * pow(R, 3);

    long long number_of_balloons = (long long)(L / volume_of_balloon);

    printf("%lld\n", number_of_balloons);

    return 0;
}
