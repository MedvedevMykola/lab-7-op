#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <string.h>
const int n = 500;

void input(char *s, char *e)
{
	puts("Enter string:");
	gets_s(s, n);
	puts("Enter group of symbols:");
	gets_s(e, n);
}
int num(char*s, char*e)
{
	int k = 0;
	char *delimiter = " .,?!:;\/(){}[]";
	char *str;
	str = strtok(s, delimiter);
	while (str != NULL)
	{
		if ( strrstr(str, e) == str)k++;
	}
	return k;
}
int main()
{
	char s[n], e[n];
	input(s, e);
	printf("word deleted:%d",num(s, e));
	_getch();
}

