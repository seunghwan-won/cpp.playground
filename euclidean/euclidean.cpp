#include <iostream>
using namespace std;

int euclidean(int u, int v);
void swap(int *u, int *v);

int main(int argc, char const *argsp[])
{
    int u = 30, v = 280;
    int result = euclidean(u, v);
    cout << "result :" << result;
    return 0;
}

// int euclidean(int u, int v)
// {
//     int temp = 0;
//     while (v != 0)
//     {
//         temp = u % v, u = v;
//         v = temp;
//     }
//     return u;
// }

int euclidean(int u, int v)
{
    if (v == 0)
        return u;
    return euclidean(v, u % v);
}
