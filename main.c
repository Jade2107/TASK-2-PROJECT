#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float Percentage=0.6;

    int Price =5000;

    int DiscountedPrice=(int)(Percentage *Price);

    printf("New Discounted Price is %d",DiscountedPrice);

    return 0;
}
