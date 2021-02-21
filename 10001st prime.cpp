#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

bool isPrime(int);
int main()
{
        int primes = 2;
        int i = 5, N=20001;
        clock_t start, stop;


        start = std::clock();
        while(true)
        {
            if(isPrime(i)) primes++;
            if(primes == N) break;
            i+=2;
        }
        stop = std::clock();

        std::cout << "The " << N << "th prime is: " << i << "\n";
        std::cout << "Duration = " << (stop-start)*1000./CLOCKS_PER_SEC << " milliseconds\n\n";

   return 0;
}

bool isPrime(int n)
{
    if(n<2) return false;
    if(n<=3) return true;
    if(n%2==0) return false;
    if(n<9) return true; // n can only be 5 or 7 at this point
    if(n%3==0) return false;

    for(int i=5; i<=sqrt(n); i+=2)
    {
        if(n%i==0)return false;
    }

    return true;
}
