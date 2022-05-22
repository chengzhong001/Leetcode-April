#include <vector>
#include <algorithm>
#include <iostream>

int next_n(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int mod = n % 10;
        n = n / 10;
        sum += mod * mod;
    }
    return sum;
}

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
    /* code */
    std::cout << "is happy number: " << isHappy(19) << std::endl;
    return 0;
}
