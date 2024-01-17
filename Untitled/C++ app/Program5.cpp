#include <iostream>
using namespace std;
#include <vector>

// Prime Numbers

bool isPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

std::vector<int> firstNPrimes(int n)

{
    std::vector<int> primes;
    int num = 2;
    while (primes.size() < n)
    {
        if (isPrime(num))
        {
            primes.push_back(num);
        }
        ++num;
    }
    return primes;
}

int main()
{
    int n = 0;
    cout << "please enter a number: ";
    cin >> n;

    std::vector<int> numberOfPrimes = firstNPrimes(n);

    std::cout << "The first " << n << " prime numbers are:" << std::endl;
    for (int prime : numberOfPrimes)
    {
        std::cout << prime << " ";
    }
    std::cout << std::endl;

    return 0;
}