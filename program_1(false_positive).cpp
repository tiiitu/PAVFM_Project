#include<stdio.h>
void main(void)
{
    unsigned long lTotal = 0;
    
    union
    {
        unsigned long l1;
        
        struct
        {
            unsigned char b1;
            unsigned char b2;
            unsigned char b3;
            unsigned char b4;
        } b;
    } u;
    
    u.l1 = 1;
    lTotal += u.b.b1;
    u.l1 = 2;                // Redundant assignment shown
    lTotal += u.b.b1;

    
    printf("b1 %u, b2 %u, b3 %u b4 %u, l1 %lu, lTotal %lu",
        u.b.b1, u.b.b2, u.b.b3, u.b.b4,
        u.l1, lTotal);
        
    // Output is "b1 2, b2 0, b3 0 b4 0, l1 2, lTotal 3"
}