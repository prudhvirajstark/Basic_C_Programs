#include<stdio.h>
 
void main() {
   
   char ch;
 
   for (int i = 0; i < 256; i++) {
      printf("%c ", ch);
      ch = ch + 1;
   }
}