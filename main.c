#include <stdio.h>
#include <stdlib.h>

int main()
{
    double Principle = 40060;
    double Time = 4;
    double Rate = 0.5;
    double SimpleInterest = Principle * Time * Rate;

    printf("The New SimpleInterest is %lf", SimpleInterest);


    return 0;
}
