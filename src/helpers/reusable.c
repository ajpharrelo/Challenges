#include <stdio.h>

char *get_string_from_keyboard(char* message, char* dest)
{
    puts(message);
    scanf("%s", dest);
}

char *get_int_from_keyboard(char* message, int* num)
{
    puts(message);
    scanf("%s", num);
}