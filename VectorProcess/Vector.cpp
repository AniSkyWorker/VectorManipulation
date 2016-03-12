#include "stdafx.h"
#include <iostream>
#include <iterator>
#include<iomanip>
#include <vector>
#include "VectorProcess.h"

int main()
{
	std::cout << "Enter numbers separated by spaces & then x character" << std::endl << "( example: '2 4 6 8 a' )" << std::endl;
	std::vector<double> numbers(std::istream_iterator<double>(std::cin), (std::istream_iterator<double>()));
	ProcessVector(numbers);
	copy(numbers.begin(), numbers.end(), std::ostream_iterator<double>(std::cout, " "));
    return 0;
}

