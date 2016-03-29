#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
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
	int k = 0; char m[1];
	char *delimiter = " .,?!:;\/(){}[]";
	char *str;
	str = strtok(s, delimiter);
	char s1[n] = {0};
	while (str != NULL)
	{
		int t = k;
		m[0] =str[strlen(str)-1];
		if (strpbrk(m,e)!=0)k++;
		if (k == t) {
			strcat(s1, str);
			strcat(s1, " ");
		}

		str = strtok(NULL, delimiter);
	}
	printf("\n");
	puts(s1);
	printf("\n");
	return k;
}
int main()
{
	char s[n], e[n];
	input(s, e);
	printf("word deleted:%d",num(s, e));
	_getch();
}

