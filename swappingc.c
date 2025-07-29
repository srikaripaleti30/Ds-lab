#include <stdio.h>

int main(void)
{
int a, b;
clrscr(); // Note: This is Turbo C-specific. Not standard in GCC.

printf("\nEnter the values of a and b: ");
scanf("%d %d", &a, &b);

printf("\nBefore swapping a = %d\t b = %d", a, b);

// Logic begins
a = a ^ b;
b = a ^ b;
a = a ^ b; 

printf("\nAfter swapping a = %d\t b = %d", a, b);
return 0;
}
