/*
Modern Roman numerals are written by expressing each digit separately starting with the leftmost digit and skipping any digit with a value of zero. There cannot be more than 3 identical symbols in a row.

In Roman numerals:

1990 is rendered: 1000=M + 900=CM + 90=XC; resulting in MCMXC.
2008 is written as 2000=MM, 8=VIII; or MMVIII.
1666 uses each Roman symbol in descending order: MDCLXVI.
Example:

   1 -->       "I"
    1000 -->       "M"
    1666 --> "MDCLXVI"
Help:

Symbol    Value
I          1
V          5
X          10
L          50
C          100
D          500
M          1,000
*/

//My sol:

#include <stdlib.h>
#include <string.h>

char *solution(int n) {
  char *result; int pos = 0;
  result = malloc(20*(sizeof(*result)));
  if(result==NULL) return NULL;
  
  int values[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
  char *roman[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
  
  for (int i = 0; i < 13; i++){
    
    while (n >= values[i])
    {
        strcpy(&result[pos], roman[i]);
        pos += strlen(roman[i]);
        n -= values[i];
    }
  }
  result[pos] = '\0';
  
  return result;
}