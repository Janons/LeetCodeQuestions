#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM 100
int countSubstrings(char *s);

int main()
{
	return 0;
}

int countSubstrings(char *s)
{
	char pal[NUM] = {0};
	bool isPalindrome = true;
	int left = 0;
	int right = strlen(s) - 1;

	// check if the char is palindrome
	while (left < right)
	{
		while (left < right && !isalnum(s[left]))
		{
			pal[left] = 1;
			left++;
		}
		while (left < right && !isalnum(s[right]))
		{
			pal[right] = 1;
			right--;
		}
		if (tolower(s[left] != s[right]))
		{
			isPalindrome = false;
		}
		left++;
		right--;
	}

	

	// if not, add all the individual values to our list
}