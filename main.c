#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float Percentage=0.7;

    int Price =58000;

    int DiscountedPrice=(int)(Percentage *Price);

    printf("Newest Discounted Price is %d",DiscountedPrice);

    return 0;
}
