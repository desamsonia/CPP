#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char str[40];
	printf("Enter string:");
	scanf("%s",str);

	char s[40];
	int k=0;
	int n = strlen(str);
	char prev = '\0';
	
	for(int i=0 ; i < n ; i++)
	{
		if( prev != str[i])
		{
			s[k++] = str[i];
		}

		prev = str[i];
	}

	s[k] = '\0';
	printf("rem:%s\n",s);
	return 0;
}
