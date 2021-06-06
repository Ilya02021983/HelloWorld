#include <stddef.h>
#include "say_hello.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include<iostream> 
#include<fstream>
using namespace std;

int main() {
char* check_word = "everyone";
char* hello_pre_str = "Hello ";
char* hello_str = (char*) malloc(strlen(hello_pre_str) + strlen(check_word) + 1);
strcpy(hello_str, hello_pre_str);
char* assert_str; 
char* comp_str; 
assert_str = strcat(hello_str, check_word);
comp_str = say_hello(check_word);

ofstream report_file("test.txt");
report_file<<"This is a test."<<endl;
 
 
if (strcmp(assert_str, comp_str) == 0)
{
 printf("<Unit test name 1: test result SUCCESS\\\>\n");
 free(hello_str);
 return 0; 
}
else {
 printf("<Unit test name 1: test result FAILED\\\>\n");
 return 1;
}
}
