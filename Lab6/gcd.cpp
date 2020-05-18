#include "gcd.h"

result_time gcd_recursive_rt(unsigned int n, unsigned int m)
{
    result_time result;
    auto begin = std::chrono::high_resolution_clock::now();
    result.result = gcd_recursive(n, m);
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
    result.time = elapsed_ms.count();
    return result;
}

result_time gcd_iteration_rt(unsigned int n, unsigned int m)
{
    result_time result;
    auto begin = std::chrono::high_resolution_clock::now();
    result.result = gcd_iteration(n, m);
    auto end = std::chrono::high_resolution_clock::now();
    result.time = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count();
    return result;
}

unsigned int gcd_recursive(unsigned int n, unsigned int m)
{
    if (n > m){
        unsigned int temp = n;
        n = m;
        m = temp;
    }
    return gcd_euclide(n, m);
        
}

unsigned int gcd_euclide(unsigned int n, unsigned int m)
{
    if (m == 0)
        return n;
    return gcd_euclide(m, n % m);
}

unsigned int gcd_iteration(unsigned int n, unsigned int m)
{
       while (n != m) {
        if (n > m) {
            unsigned int tmp = n;
            n = m;
            m = tmp;
        }
        m = m - n;
    }
    return n;
}

