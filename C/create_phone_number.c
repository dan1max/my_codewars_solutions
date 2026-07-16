/*
Write a function that accepts an array of 10 integers (between 0 and 9), that returns a string of those numbers in the form of a phone number.

Example
create_phone_number(phnum, (const unsigned char[]){1,2,3,4,5,6,7,8,9,0});
    phnum <- "(123) 456-7890"
The returned format must be correct in order to complete this challenge.

Dont forget the space after the closing parentheses!
*/

//My solution (obfuscated, could have been done in a single line w/ sprintf)):

#include <stdint.h>

char *create_phone_number(char phnum[15], const uint8_t digits[10])
{
  *phnum = '\0'; int j = 0;
  for(int i=0; i<15; i++){
    if(i==0) phnum[i] = '(';
    if(i==4) phnum[i] = ')';
    if(i==5) phnum[i] = ' ';
    if(i==9) phnum[i] = '-';
    if(i!=0 && i!=4 && i!=5 && i!=9 && i!=14){
      phnum[i]=digits[j] + '0';
      j++;
    }
    if(i==14) phnum[i]= '\0';
  } 
  return phnum;
}