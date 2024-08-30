#include <stdio.h>
#include <stdlib.h>

char randchar(void) {
    char r;
    r = rand() % 26; /* generates random value between 0 and 25 */
    r += 'A'; /* it is then increased by character value A making it a random capital letter */ 
    return (r); /* returns a random character */
}
