#include <stdio.h>
#include <math.h>
struct point
{
    int x;
    int y;
    int r;
};

int main(void)
{

    struct point pnt1={1,1,3};
    struct point pnt2={4,5,2};

    struct point *ptr1;
    struct point *ptr2;

    ptr1=&pnt1;
    ptr2=&pnt2;

    
    printf("DISTANCE AB: %.2f",AB);

    return 0;
}
