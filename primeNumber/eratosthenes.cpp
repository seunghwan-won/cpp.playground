#include <iostream>

int main(int argc, char const *args[])
{
    int n = 1000;
    int *primeArray = new int[n + 1];
    memset(primeArray, 0, sizeof(int) * (n + 1));
    int i = 2, j = 0;
    primeArray[0] = 1;
    primeArray[1] = 1;
    for (; i <= n; i++)
    {
        if (primeArray[i] == 1)
            continue;
        j = i;
        while ((j += i) <= n)
            primeArray[j] = 1;
    }

    for (i = 0; i <= n; i++)
    {
        if (primeArray[i] == 0)
            std::cout << i << "는 소수 \n";
    }

    delete [] primeArray;
    return 0;
}