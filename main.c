#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float Percentage=0.5;

    int Price =5800;

    int DiscountedPrice=(int)(Percentage *Price);

    printf("New* Discounted Price is %d",DiscountedPrice);

    return 0;
}
