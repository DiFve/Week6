#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int strlen(char* word)
{
	int i = 0;
	while (word[i] != '\0')
	{
		i++;
	}
	return i;
}
int main()
{
	char word[101];
	scanf("%s", &word);
	int i = 0;
	if (strlen(word) <= 100)
	{
		for (int i = 0; i < strlen(word); i++)
		{
			if ((word[i]>='A' && word[i]<='Z') || (word[i]>='0' && word[i] <='9'))
			{
				if (word[i] == '1')	word[i] = 'I';
				else if (word[i] == '2')	word[i] = 'R';
				else if (word[i] == '3')	word[i] = 'E';
				else if (word[i] == '4')	word[i] = 'A';
				else if (word[i] == '5')	word[i] = 'S';
				else if (word[i] == '6')	word[i] = 'B';
				else if (word[i] == '7')	word[i] = 'T';
				else if (word[i] == '9')	word[i] = 'G';
				else if (word[i] == '0')	word[i] = 'O';
				
			}
			else
			{
				printf("ERROR");
				return 0;
			}
			
		}
		printf("%s",word);
	}
	else	printf("ERROR");
	return 0;
}