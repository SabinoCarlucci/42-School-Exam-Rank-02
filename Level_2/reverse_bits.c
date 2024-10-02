/* 
https://github.com/pasqualerossi/42-School-Exam-Rank-02/blob/main/Level%202/reverse_bits/README.md

Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0100  0001
     ||
     \/
 1000  0010
  */

 #include <unistd.h>
 #include <stdio.h>
 #include <stdlib.h>

 unsigned char	reverse_bits(unsigned char octet)
 {
	int cont = 7;
	unsigned char output;
	int bit;

	while (cont >= 0)
	{
		bit = ~(octet >> cont) + '0';
		output
		cont--;
	}
 }

 int main(int argc, char **argv)
 {
	if (argc)
		;
	reverse_bits(atoi(argv[1]));
	return(0);
 }