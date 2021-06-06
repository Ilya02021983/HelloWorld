#include <stddef.h>
#include "say_hello.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char* check_word = "everyone";
    char* hello_pre_str = "Hewllo ";
    char* hello_str = (char*) malloc(strlen(hello_pre_str) + strlen(check_word) + 1);
    strcpy(hello_str, hello_pre_str);
    char* assert_str;
    char* comp_str;
    assert_str = strcat(hello_str, check_word);
    comp_str = say_hello(check_word);
    if (strcmp(assert_str, comp_str) == 0)
    {
        printf("<Unit test name %s: test result SUCCESS/>\n", argv[1]);
        free(hello_str);
        return 0;
    }
    else
    {
        printf("<Unit test name %s: test result FAILED\\>\n", argv[1]);
        return 1;
    }
}
