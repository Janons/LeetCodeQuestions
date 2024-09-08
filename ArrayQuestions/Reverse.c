#include <stdio.h>

int *reversedigit(int *digits, int len);

int main()
{
    int digits[5] = {1, 2, 3, 4, 5};
    int len = 5;  // Explicitly specify the length

    int *reversed_digits = reversedigit(digits, len);

    for (int i = 0; i < len; i++)
    {
        fprintf(stdout, "%d ", reversed_digits[i]);
    }

    return 0;
}

int *reversedigit(int *digits, int len)
{
    int i, temp;

    for (i = 0; i < len / 2; i++) {
        temp = digits[i];
        digits[i] = digits[len - i - 1];
        digits[len - i - 1] = temp;
    }

    return digits;
}
