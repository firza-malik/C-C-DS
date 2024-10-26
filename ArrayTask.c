#include<stdio.h>
#include<conio.h>
 
int Arrays() {
    char str1[100];
    char str2[100];
    printf("Enter str1: ");
    gets(str1);
    printf("Enter str2: ");
    gets(str2);
    int lenstr1 = 0;
    while(str1[lenstr1] != '\0') {
        lenstr1++;
    }
    for(int i = 0; i < lenstr1; i++) {
        if(str1[i] != str2[i]) {
            return 1;  
        }
    }
    return 0;
}
void main() {
    printf("%d", Arrays());
    getch();
}
