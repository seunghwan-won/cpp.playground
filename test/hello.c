#include <stdio.h>
void towerOfHanoi(int n, char from, char to, char middle)
{
    if (n == 1)
    {
        printf("move %c -> %c\n", from, to);
        return;
    }
    towerOfHanoi(n - 1, from, middle, to);
    towerOfHanoi(n - 1, middle, to, from);
}

int main(int argc, char const *argv[])
{
    int n = 4;
    towerOfHanoi(n, 'A', 'C', 'B');
    // hello();
   return 0;
}

// void hello()    // 반환값이 없는 hello 함수 선언 및 정의
// {
//     printf("Hello, world!\n");    // Hello, world! 출력
// }

