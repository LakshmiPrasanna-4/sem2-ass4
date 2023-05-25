#include<stdio.h>
int main()
{
	char str[100],ch;
	int lwr=0,dig=0,sp=0;
	int i=0;
	gets(str);
	while(str[i++]!='\0')
	{
		ch=str[i];
		if(ch>='a'&&ch<='z')
			lwr++;
	}
	printf("%d",lwr);
}
