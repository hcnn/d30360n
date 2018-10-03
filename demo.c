#include <stdio.h>  // printf
#include "d30360n.h"

int main()
{
    int y1, m1, d1, y2, m2, d2;
    y1 = 2018; m1 = 12; d1 = 15;
    y2 = 2019; m2 = 3; d2 = 1;

    double yf = d30360n(y1, m1, d1, y2, m2, d2);
    printf("%.8f\n", yf);

	return 0;
}
