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

static void Challenge_3()
{
    int width = 0, height = 0;
    puts("Enter a rectangle width");
    scanf("%d", &width);

    puts("Enter a rectangle height");
    scanf("%d", &height);

    printf("\nArea of rectangle: %d\n", width * height);
}

static void Challenge_4()
{
    
}

int main(int argc, char const *argv[])
{
    return 0;
}
