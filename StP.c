#include <stdio.h>  
struct Employee  {  
    char name[30];  
    int id;  
    int age;  
};  
struct Employee emp1, emp2, *ptr1, *ptr2;  
int main()  {  
    ptr1 = &emp1;  
    ptr2 = &emp2;  
      
    printf (" Enter the name of the Employee (emp1): ");  
    scanf (" %s", &ptr1->name);  
    printf (" Enter the id of the Employee (emp1): ");  
    scanf (" %d", &ptr1->id);  
    printf (" Enter the age of the Employee (emp1): ");  
    scanf (" %d", &ptr1->age);  
    printf (" \n Second Employee: \n");  
    printf (" Enter the name of the Employee (emp2): ");  
    scanf (" %s", &ptr2->name);  
    printf (" Enter the id of the Employee (emp2): ");  
    scanf (" %d", &ptr2->id);  
    printf (" Enter the age of the Employee (emp2): ");  
    scanf (" %d", &ptr2->age);  
    printf ("\n Display the Details of the Employee using Structure Pointer");  
    printf ("\n Details of the Employee (emp1) \n");  
    printf(" Name: %s\n", ptr1->name);  
    printf(" Id: %d\n", ptr1->id);  
    printf(" Age: %d\n", ptr1->age);  
    printf ("\n Details of the Employee (emp2) \n");  
    printf(" Name: %s\n", ptr2->name);  
    printf(" Id: %d\n", ptr2->id);  
    printf(" Age: %d\n", ptr2->age);  
    return 0;  
}   