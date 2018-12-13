#include <stdio.h>
#include <math.h>

#define pi acos(-1)

double element(long i, double step, double up);
double f( double );
int main()
{
    double ans = 0;


    double up; // the upper limit
    printf("Please enter the upper limit: ");
    scanf("%lf", &up);

    double low; // the lower limit
    printf("Please enter the lower limit: ");
    scanf("%lf", &low);

    if (up <= low)
    {
        printf("Please let upper limit be the lager one!");
        return 0;
    }

    long n = 10000;
    double step = (up - low) / n;

    for (long i = 0; i < n; i++)
    {
        ans += element(i,step, up);
    }
   printf("The answer is %f. \n", ans);
   printf("n = %ld", n);



    return 0;
}

double f( double x)
{
    if (x == 0)
        return -100;
    else
        return sin(x)/x;
}

double element(long i, double step, double up)
// i from 0 to n-1
{
    return f(up - i * step) *step;
}

