#include <iostream>

int strlen(char* word)
{
	int result = 0;
	while (*word != 0)
	{
		result++;
		word++;
	}
	return result;
}

bool strcmp(char* word1, char* word2)
{
	while (*word1 != 0 || *word2 != 0)
	{
		if (*word1 != *word2)
		{
			return false;
		}
		*word1++;
		*word2++;
	}
	if (*word1 == *word2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void strcpy(char* word1, char* word2)
{
	while (*word1 != 0)
	{
		*word2++ = *word1++;
	}
	*word2 = 0;
}

int main()
{
	char word1[] = "Abecadlo";
	printf("%d\n", strlen(word1));

	char word2[] = "Abecadlo";
	printf("%d\n", strcmp(word1, word2));

	char *word3 = new char;
	strcpy(word1, word3);
	printf("%s\n", word3);

	return 0;
}