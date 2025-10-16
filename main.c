#include <stdio.h>
#include <stdlib.h>

int  i;

void f(void)
{
     int i;
    for (i = 0; i < 10; i++)
        printf("#");
}

int main(void)
{
    for (i = 0; i < 5; i++)
    {
        f();
    }

    system("PAUSE");
    return 0;
}
