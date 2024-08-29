#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* rand_string(char *s, size_t size);

char* rand_string_alloc(size_t size) {
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size);
     }
     return s;
}

int main() {
    srand(time(NULL));
    char *s = rand_string_alloc(7);
    if (s) {
        printf("%s\n", s);
    }
    return 0;
}

