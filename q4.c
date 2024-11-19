#include<stdio.h>

void main()
{
	vote(20);
}

void vote(int n)
{
	if(n>18)
	{
		printf("you are eligible for vote!");
	}
	else
	{
		printf("you are not eligible for vote!");
	}
}