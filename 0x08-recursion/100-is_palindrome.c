#include "main.h"
#include <string.h>
#include <ctype.h>

int is_palindrome_recursive(char *s, int start, int end)
{
    if (start >= end)
    {
        return 1; // Base case: It's a palindrome
    }

    while (!isalnum(s[start]) && start < end)
    {
        start++;
    }

    while (!isalnum(s[end]) && start < end)
    {
        end--;
    }

    if (tolower(s[start]) != tolower(s[end]))
    {
        return 0; // Not a palindrome
    }

    return is_palindrome_recursive(s, start + 1, end - 1);
}

int is_palindrome(char *s)
{
    int length = strlen(s);

    if (length == 0)
    {
        return 1;
    }

    return is_palindrome_recursive(s, 0, length - 1);
}
