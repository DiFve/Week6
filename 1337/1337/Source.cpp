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
			if (word[i] >= 'A' && word[i] <= 'Z')
			{
				if (word[i] == 'I')	word[i] = '1';
				else if (word[i] == 'R')	word[i] = '2';
				else if (word[i] == 'E')	word[i] = '3';
				else if (word[i] == 'A')	word[i] = '4';
				else if (word[i] == 'S')	word[i] = '5';
				else if (word[i] == 'B')	word[i] = '6';
				else if (word[i] == 'T')	word[i] = '7';
				else if (word[i] == 'G')	word[i] = '9';
				else if (word[i] == 'O')	word[i] = '0';
			}
			else
			{
				printf("ERROR");
				return 0;
			}
		}
		for (int i = 0; i < strlen(word); i++)	printf("%c", word[i]);
	}
	else	printf("ERROR");
	return 0;
}