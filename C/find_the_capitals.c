/*
Instructions
Write a function that takes a single non-empty string of only lowercase and uppercase ascii letters (word) as its argument, and returns an ordered list containing the indices of all capital (uppercase) letters in the string.

Example (Input --> Output)
"CodEWaRs" --> [0,3,4,6]
*/

//My solution:

#include <stddef.h>
#include <string.h>
#include <ctype.h>

size_t *find_capitals (const char *word, size_t *uppercase_count)
{
  size_t size = 0;

  while (word[size] != '\0')
  {
      size++;
  }
  *uppercase_count = 0;
  for(size_t i=0; i<size; i++){
    if(isupper(word[i])){
      (*uppercase_count)++;
    }
  }
  
  size_t *result; size_t j = 0;
  
  result = malloc(*uppercase_count * sizeof(*result));
  if(result==NULL) return NULL;
  
  for(size_t i=0; i<size; i++){
    if(isupper(word[i])){
      result[j] = i;
      j++;
    }
  }

  return result;
}