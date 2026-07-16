/*
A pangram is a sentence that contains every single letter of the alphabet at least once. For example, the sentence "The quick brown fox jumps over the lazy dog" is a pangram, because it uses the letters A-Z at least once (case is irrelevant).

Given a string, detect whether or not it is a pangram. Return True if it is, False if not. Ignore numbers and punctuation.
*/

//My solution:

#include <stdbool.h>
#include <ctype.h>

bool is_pangram(const char *str_in) {
    int i=0; char character;
    bool seen[26] = {false};
    unsigned char index;
    
    while(*str_in != '\0'){
      character = tolower(*str_in);
      if(isalpha(character)){
        index = character - 'a';
        seen[index] = true;
        str_in++;
      } else {str_in++;}
      
    }
    
    for(i=0; i<=25; i++){
      if(seen[i] == false){
        return false;
      }
    }
    return true;
}