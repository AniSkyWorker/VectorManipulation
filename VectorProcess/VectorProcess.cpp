#include "VectorProcess.h"
#include <algorithm>
#include <boost/phoenix.hpp>
#include <boost/range/algorithm/transform.hpp>

void ProcessVector(std::vector<double> & numbers)
{
	auto min = std::min_element(numbers.begin(), numbers.end());
	if(min != numbers.end())
		boost::transform(numbers, numbers.begin(), *min * boost::phoenix::placeholders::arg1);
	std::sort(numbers.begin(), numbers.end());
}