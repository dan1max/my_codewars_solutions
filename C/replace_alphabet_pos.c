/*
Welcome.

In this kata you are required to, given a string, replace every letter with its position in the alphabet.

If anything in the text isn't a letter, ignore it and don't return it.

"a" = 1, "b" = 2, etc.

Example
Input = "The sunset sets at twelve o' clock."
Output = "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11"
*/

// My solution(this one was TRICKY):

#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

char *alphabet_position(const char *text) {
    int size = 0;

    for (const char *p = text; *p != '\0'; p++) {
        if (isalpha(*p)) {
            int pos = tolower(*p) - 'a' + 1;

            if (pos < 10)
                size += 2;
            else
                size += 3;
        }
    }

    if (size == 0) {
        char *result = malloc(1);
        if (result)
            result[0] = '\0';
        return result;
    }

    size--;

    char *result = malloc(size + 1);
    if (result == NULL)
        return NULL;

    char *out = result;

    for (const char *p = text; *p != '\0'; p++) {
        if (isalpha(*p)) {
            int pos = tolower(*p) - 'a' + 1;

            out += sprintf(out, "%d ", pos);
        }
    }

    out[-1] = '\0';

    return result;
}