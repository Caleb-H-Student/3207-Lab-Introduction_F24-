#include <stdio.h>
#include <stdlib.h>

char randchar(void) {
    char r;
    r = rand() % 26; /* generates random value between 0 and 25 */
    r += 'A'; /* it is then increased by character value A making it a random capital letter */ 
    return (r);
}

char* rand_string(char *s, size_t size) {
    for (size_t a = 0; a < size; a++) {
        *(s + a) = randchar();
    }
    *(s + size) = '\0';
    return s;
}
