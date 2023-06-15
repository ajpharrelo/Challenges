#include <stdio.h>
#include "reusable.h"

void get_string_from_keyboard(char* message, char* dest)
{
    puts(message);
    scanf("%s", dest);
}

void get_int_from_keyboard(char* message, int* num)
{
    puts(message);
    scanf("%d", num);
}