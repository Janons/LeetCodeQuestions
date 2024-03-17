#include <stdio.h>
#include <string.h>

/*prototypes*/

int palindrome_check(char *string);
void *util_mem(int size);

int main()
{
    char *string;
    char s[100];
    int lenString, result;

    fprintf(stdout, "Please enter the string to  be checked.\n");
    scanf("%s", s);

    lenString = strlen(s); // fix this part
    *string = (char *)util_mem(lenString * char);
    *string = s;

    /*using the function*/
    result = palindrome_check(string);

    if (result == 1)
    {
        fprintf(stdout, "Is a palindrome");
    }
    else
    {
        fprintf(stdout, "Not a palindrome");
    }

    return 0;
}

int palindrome_check(char *string)
{

    int start, end;
    int flag = 0;

    while (start <= end)
    {
        if (string[start] != string[end])
        {
            flag = 1;
            break;
        }
        start++;
        end--;
    }
    return flag;
}

void *util_mem(int size)
{
    void *array;
    array = (void*)malloc(size);

    if (array == NULL)
    {
        return ;
    }
}