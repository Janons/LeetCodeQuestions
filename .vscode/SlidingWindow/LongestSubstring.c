#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b));

int lengthOfLongestSubstring(char *s);

// driver code
int main()
{
    char *s = "abcabcbb";

    int max_Len = lengthOfLongestSubstring(s);

    return 0;
}

int lengthOfLongestSubstring(char *s)
{
    int maxLen = 0;
    int start = 0;
    int n = strlen(s);
    int charIndex[256];

    // Initialize the charIndex array
    for (int i = 0; i < 256; i++)
    {
        charIndex[i] = -1; // -1 means the character hasn't been seen yet
    }

    for (int i = 1; i < 256; i++)
    {
        if (charIndex[s[i]] >= start)
        {
            
        }
    }

    return strlen(maxLen);
}
