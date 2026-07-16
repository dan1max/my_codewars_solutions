/*
Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

Examples:

Inputs: "abc", "bc"
Output: true

Inputs: "abc", "d"
Output: false
*/

//My solution:

#include <stdbool.h>
#include <string.h>

bool solution(const char *string, const char *ending)
{
    size_t len_str = strlen(string);
    size_t len_end = strlen(ending);

    if (len_end > len_str)
        return false;

    return strcmp(string + (len_str - len_end), ending) == 0;
}