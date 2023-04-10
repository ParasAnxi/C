#include<stdio.h>
void copy_string(char*, char*);
int main(){
    char src[100], cpy[100];    
    printf("Enter source string\n");    
    gets(src);    
    copy_string(cpy, src);    
    printf("Copied string is \"%s\"\n", cpy);    
    return 0;
}
void copy_string(char *cpy, char *src){
    while(*src){
        *cpy = *src;        
        src++;        
        cpy++;
    }    
    *cpy = '\0';
}