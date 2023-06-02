#include <stdio.h>
#include "bit_ops.h"

/* Returns the Nth bit of X. Assumes 0 <= N <= 31. */
unsigned get_bit(unsigned x, unsigned n) {
    /* YOUR CODE HERE */
//    return -1; /* UPDATE WITH THE CORRECT RETURN VALUE*/
    x = x >> n;
	return x & 1; 
}

/* Set the nth bit of the value of x to v. Assumes 0 <= N <= 31, and V is 0 or 1 */
void set_bit(unsigned *x, unsigned n, unsigned v) { //0b1001110,2,0
    /* YOUR CODE HERE */                          //->0b1001010
    unsigned sb = 1 << n;                           //0b0000100
    sb = ~sb;                                       //0b1111011
    *x = *x & sb;                                   //0b1001010
    *x = *x | (v << n);                             //0b1001v10
    ;
}

/* Flips the Nth bit in X. Assumes 0 <= N <= 31.*/
void flip_bit(unsigned *x, unsigned n) {
    /* YOUR CODE HERE */	//0b1v01110,5 -> 0b1101110
    unsigned sb = 1 << n;   //0b0100000
    *x = *x ^ sb;
}

