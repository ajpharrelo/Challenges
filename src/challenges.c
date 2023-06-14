#include <stdio.h>
#include "helpers/reusable.h"

static void Challenge_1()
{
    puts("What is a ninja's favorite tea?");
    getchar();
    puts("Kara-tea");
}

static void Challenge_2()
{
    char name[15];
    puts("Please enter your name");

    scanf("%s", name);

    printf("\nHello, %s\n", name);
}

int main(int argc, char const *argv[])
{
    Challenge_2();
    return 0;
}
