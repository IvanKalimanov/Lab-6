#pragma once

#include <iostream>
#include <chrono>



struct result_time{
    unsigned int result;
    double time;
};

unsigned int gcd_recursive(unsigned int n, unsigned int m);
unsigned int gcd_iteration(unsigned int n, unsigned int m);
unsigned int gcd_euclide(unsigned int n, unsigned int m);
result_time gcd_iteration_rt(unsigned int n, unsigned int m);
result_time gcd_recursive_rt(unsigned int n, unsigned int m);