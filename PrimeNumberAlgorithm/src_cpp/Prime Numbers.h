#include "vector"    
#include <math.h>
#include <iostream>
#include <cmath>
#include <iostream>
#include <chrono> 
using namespace std;
using namespace std::chrono;
#pragma once

#ifndef PRIMENUMBERS_H
#define PRIMENUMBERS_H
class PrimeNumbers
{
public:
	std::vector<int> primeVector;
	PrimeNumbers();
	void algorithm();
	void display();
	void print(std::vector<int> const & input);
	void time();
};

#endif