//Author: Sean Benson
//Date: 3/6/2019
//Prime Numbers.cpp : Defines the entry point for the console application.
//reference: https://www.youtube.com/watch?v=TDGETBsPKjQ by Joe James
//reference::https://www.geeksforgeeks.org/measure-execution-time-function-cpp/

#include "stdafx.h"
#include "Prime Numbers.h"

int main()
{
	PrimeNumbers primeNumbers;

	// Get starting timepoint 
	auto start = high_resolution_clock::now();

	primeNumbers.algorithm();

	// Get ending timepoint 
	auto stop = high_resolution_clock::now();

	// Get duration. Substart timepoints to  
	// get durarion. To cast it to proper unit 
	// use duration cast method 
	auto duration = duration_cast<microseconds>(stop - start);

	primeNumbers.display();

	cout << "Time taken by function: "
		<< duration.count() << " microseconds" << endl;

	system("pause");
    return 0;
}

PrimeNumbers::PrimeNumbers()
{
}

void PrimeNumbers::algorithm()
{
	int max = 1000;
	for (int x = 2; x <= max; x++) {
		bool isPrime = true;
		for (int y = 2; y < sqrt(x); y++) {
			if (x % y == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime)
			primeVector.push_back(x);
	}
}

void PrimeNumbers::display()
{
	//for (int i = 0; i<primeVector.size(); ++i)
	//	std::cout << primeVector[i] << " ";
	print(primeVector);
}

//reference: https://www.techiedelight.com/print-vector-cpp/
void PrimeNumbers::print(std::vector<int> const &input)
{
	for (unsigned int i = 0; i < input.size(); i++) {
		std::cout << input.at(i) << ' ';
	}
	cout << endl;
}