#include <stdio.h>
#include <math.h>

double element(long i, double step, double up);
inline double f( double );

int main()
{
    double ans = 0;


    double up = acos(-1); // the upper limit = pi
    double low = 1; // the lower limit

    if (up <= low)
    {
        printf("Please let upper limit be the lager one!");
        return 0;
    }

    long n = 10000000;
    double step = (up - low) / n;

    for (long i = 0; i < n; i++)
    {
        ans += element(i,step, up);
    }
   printf("The answer is %.5f. \n", ans);
   printf("n = %ld \n", n);



    return 0;
}

inline double f( double x)
{
        return sin(x)/x;
}

double element(long i, double step, double up)
// i from 0 to n-1
{
    return f(up - i * step) *step;
}
// LLY
