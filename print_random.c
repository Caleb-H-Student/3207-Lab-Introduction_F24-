#include <stdio.h>
#include <stdlib.h>
#include <time.h> // needed for seeding random number generator

#include "random.h" // header file for random.c functions

char* rand_string_alloc(size_t size) {
     char *s = malloc(size + 1); /* allocate memory for size characters plus the null terminator */

     if (s) { /* if memory call succeeds call rand_string which fills a string with random characters */
        rand_string(s, size);
     }
     return s; /* return the pointer to the beginning of the string */
}

int main(int argc, char *argv[]) {
    srand(time(NULL)); // seeds random number generator

    /* allocate memory for a string of 7 characters */
    char *s = rand_string_alloc(7);  
    if (s) { /* if memory was successfully allocated print random string */
        printf("%s\n", s);
    }
    return 0;
}

