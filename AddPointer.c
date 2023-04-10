#include <stdio.h>

int main()
{
    int a, b, c, *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;
    printf("Enter 2 numbers\n");
    scanf("%d%d", &a, &b);
    c = *ptr1 + *ptr2;
    printf("Using *ptr1 + *ptr2 : %d + %d = %d\n", a, b, c);
    c = *(&a) + *(&b);
    printf("Using  *(&a) + *(&b) : %d + %d = %d\n", a, b, c);
    return 0;
}