#include <stdio.h>
#include <stdlib.h>

int inc(int counter);

int main(void)
{
    int i = 10;
    printf("함수 호출 전 i = %d\n", i);
    i = inc(i); // 함수의 반환값을 이용하여 함수 밖에서도 변수 사용 가능 
    printf("함수 호출 후 i = %d\n", i);

    system("PAUSE");
    return 0;
}

int inc(int counter)
{
    counter++;
    return counter;
}
