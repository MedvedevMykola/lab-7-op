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

int main()
{
	char s[n], e[n];
	input(s, e);
	_getch();
}

