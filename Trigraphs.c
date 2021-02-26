#include<stdio.h>
void main(){
/*
Trigraphs.

#include <stdio.h>
 
void main()
{
	printf ("Hello World??!\n");
}
At first sight this code should produce the output

Hello World??!
But it doesn’t; it does this:

Hello World|
Back in the 20th century, before Unicode was developed, many character sets had accented or different characters that took up the spaces of some of the punctuation characters that C needed. To allow people to still be able to program in C, the 1989 definition of the language defined nine three-character sequences that would be replaced with the characters that were difficult to access.

Sequence Replacement
======== ===========
  ??=         #
  ??(         [
  ??/         \
  ??)         ]
  ??'         ^
  ??<         {
  ??!         |
  ??>         }
  ??-         ~

*/
	printf("Hello World??!\n");
}