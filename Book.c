#include <stdio.h>
#include <conio.h>
#include <string.h>
#include<stdlib.h>
#define SIZE 20
struct book{
    char name[20];
    char author[20];
    float price;
};

void dis(struct book v[], int n);
void main(){
    struct book b[SIZE];
    int n, i;
    printf("Enter the Numbers of Books:");
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i < n; i++){
        printf("\nEnter the Book Name:\n");
        scanf("%s", b[i].name);
        printf("Enter the Author of Book:\n");
        scanf("%s", b[i].author);
        printf("Enter the Price of Book:\n");
        scanf("%f", &b[i].price);
    }
    dis(b, n);
    getch();
}
void dis(struct book v[], int n){
    int i, t = 1;
    for (i = 0; i < n; i++, t++){
        printf("\n");
        printf("Book No.%d\n", t);
        printf("\t\tBook %d Name is=%s \n", t, v[i].name);
        printf("\t\tBook %d Author is=%s \n", t, v[i].author);
        printf("\t\tBook %d Price is=%f \n", t, v[i].price);
        printf("\n");
    }
}