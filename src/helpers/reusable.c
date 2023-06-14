#include <stdio.h>

char *get_string_from_keyboard(char* message, char* dest)
{
    puts(message);
    scanf("%s", dest);
}