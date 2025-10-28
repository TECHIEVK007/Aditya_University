//Week-1
//Write a single program to read int,float,char and string using scanf() and display using printf()
#include <stdio.h>
int main()
{
	int a;
	float b;
	char ch;
	char str[101];
	printf("Enter a number");
	scanf("%d",&a);
	printf("Enter a float point value");
	scanf("%f\n",&b);
	printf("Enter a character");
	scanf("%c\n",&ch);
	printf("Enter a string");
	scanf("%s\n",&str);
	printf("%d\n%f\n%c\n%s",a,b,ch,str);
	return 0;
}
