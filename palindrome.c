#include<stdio.h>
#include<string.h>

void palin(char nm[30])
{
	int i,len,ch=0;
	len=strlen(nm);
	for (i=0;i<len;i++)
	{
		if(nm[i]!=nm[len-i-1])
		{
			printf("not palindrome");
			ch++;
			break;
		}
		
	}
	if(ch<1)
	{
		printf("it is a palindrome");
	}
}
int main()
{
	palin("rajar");
	return 0;
}
