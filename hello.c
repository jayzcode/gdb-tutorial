/* 
 * Sample program to display table
 * compile: gcc -g -o hello hello.c
 */

#include<stdio.h>

void main(int argc, char *argv[])
{
	int i, n;
	printf("****** GDB test *******\n");
	printf("This program displays the table of n, \nEnter value of n : ");
	scanf("%d", &n);
	for(i=1; i<=10; i++) {
		printf("%d x %d = %d\n", n, i, (n*i));
	}
	printf("Cheers...!!\n");
}
