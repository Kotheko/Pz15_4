#include <iostream>

void FindOddNumbers(int n, bool IsOdd)
{
    if (IsOdd)
    {
        std::cout << n << std::endl;
    }
}

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        FindOddNumbers(i, i % 2 != 0);
    }
}