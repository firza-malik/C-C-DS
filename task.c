#include<stdio.h>
#include<conio.h>
int add(int a,int b){
	return a+b;
} 
int sub(int a,int b){
	return a-b;
}
int mult(int a ,int b){
	return a*b;
}
int div(int a ,int b){
	return a/b;
}
void main(){
	int a,b;
	printf("enter a opt(-,+,/,*):");
	char opt=getch();
	printf("enter a numbers:");
	scanf("%d,%d",&a,&b);
	switch(opt){
		case'+':
		printf("%d",add(a,b));
			break;
		case'-':
		printf("%d",sub(a,b));
			break;
		case'*':
		printf("%d",mult(a,b));
			break;
		case'/':
		printf("%d",div(a,b));
		break;
	}
	getch();
	
}