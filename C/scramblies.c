/*
Complete the function scramble(str1, str2) that returns true if a portion of str1 characters can be rearranged to match str2, otherwise returns false.

Notes:

Only lower case letters will be used (a-z). No punctuation or digits will be included.
Performance needs to be considered.
Input strings s1 and s2 are null terminated.
Examples
scramble('rkqodlw', 'world') ==> True
scramble('cedewaraaossoqqyt', 'codewars') ==> True
scramble('katas', 'steak') ==> False
*/

// My Solution:

#include <stdbool.h>

bool scramble(const char *str1, const char *str2)
{
  int letters[26] = {0};
  
  for (int i = 0; str1[i] != '\0'; i++){
    letters[str1[i] - 'a']++;
  }
  
  for (int i = 0; str2[i] != '\0'; i++){
    letters[str2[i] - 'a']--;
    if (letters[str2[i] - 'a'] < 0)
      return false;
  }
  
  return true;
}