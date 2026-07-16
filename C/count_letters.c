/*
The main idea is to count all the occurring characters in a string. If you have a string like aba, then the result should be {'a': 2, 'b': 1}.

What if the string is empty? Then the result should be empty object literal, {}.
*/

//My sol:

#define COUNTS_SIZE 128

void count(const char *string, unsigned counts[COUNTS_SIZE]) {

  int letters[26] = {0};
  
  for (int i = 0; i < COUNTS_SIZE; i++){
    counts[i] = 0;
  }

  for (int i = 0; string[i] != '\0'; i++){
    counts[(unsigned char)string[i]]++;
  }

}