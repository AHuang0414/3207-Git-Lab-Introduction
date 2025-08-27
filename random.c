#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int randchar()
{
    srand((unsigned)time(NULL));

    char c = 'A' + (rand() % 26);
    

    return c;
}