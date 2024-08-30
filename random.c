#include <stdio.h>
#include <stdlib.h>

char randchar(void) {
    char r;
    r = rand() % 26; /* generates random value between 0 and 25 */
    r += 'A'; /* it is then increased by character value A making it a random capital letter */ 
    return (r); /* returns a random character */
}

char* rand_string(char *s, size_t size) {
    /* loops through the array assigning each element a random char */
    for (size_t a = 0; a < size; a++) {
        *(s + a) = randchar();
    }
    *(s + size) = '\0'; /* adds the null terminator to the end of the string */
    return s; /* returns pointer to the string */
}
