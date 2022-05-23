#include <stdio.h>
#include <stdbool.h>

int next_n(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int num = n % 10;
        n = n / 10;
        sum += num * num;
    }
    return sum;
}
bool contains(int *history, int size, int n)
{
    for (size_t i = 0; i < size; i++)
    {
        if (history[i] == n)
            return true;
    }
    return false;
}
// bool isHappy(int n)
// {
//     int history[1000];
//     int size = 0;

//     n = next_n(n);
//     while (!contains(history, size, n))
//     {
//         history[size] = n;
//         size++;
//         n = next_n(n);
//     }
//     return n == 1;
// }

bool isHappy(int n)
{
    int slow = n;
    int fast = n;
    do
    {
        slow = next_n(slow);
        fast = next_n(next_n(fast));
    } while (slow != fast);
    return fast == 1;
}

int main(int argc, char const *argv[])
{
    bool value = isHappy(19);
    printf("is happy number: %d\n", value);
    return 0;
}
