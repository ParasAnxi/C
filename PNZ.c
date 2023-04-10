#include <stdio.h> 
int main(){ 
    int A; 
    int *p =&A;
    printf("Enter the number A: "); 
    scanf("%d", &A); 
    if (*p > 0) 
        printf("%d is positive.", A); 
    else if (*p < 0) 
        printf("%d is negative.", A); 
    else if (*p == 0) 
        printf("%d is zero.", A); 
  
    return 0; 
} 