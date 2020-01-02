#include <iostream>
#include <math.h>

bool is_prime1(int n);
bool is_prime2(int n);

int main(int argc, char const *args[])
{

    std::cout << is_prime2(10);
    std::cout << "\n"
              << is_prime2(47);
    return 0;
}

bool is_prime1(int n)
{
    int i = 0;
    for (i = 2; i < n - 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool is_prime2(int n)
{
    int i = 2, squt = (int)sqrt(n);
    for (; i < squt; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}