#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],t;
	int i,j=0;
	printf("Enter a String : ");
	gets(s);
    printf("\n The Original String is : %s",s);
	i=0;
	j=strlen(s)-1;
	while(i<j)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
		i++;
		j--;
	}
//	printf("\n The Original String is : %s",s);
	printf("\n The Reversed String is :%s",s);
}
