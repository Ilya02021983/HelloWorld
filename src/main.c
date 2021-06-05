#include <stdio.h>
#include <stdlib.h>
#include "say_hello.h"


int main() {
    char str[100] = "world!\n";
    char* hello = say_hello(str);
    printf("%s", hello);
    free(hello);
    return 0;
}
