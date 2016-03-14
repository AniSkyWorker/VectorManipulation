#include "stdafx.h"
#include "../VectorProcess/VectorProcess.h"

BOOST_AUTO_TEST_SUITE(ProcessVector_function)

	BOOST_AUTO_TEST_CASE(makes_empty_vector_from_empty_vector)
	{
		std::vector<double> emptyVector;
		ProcessVector(emptyVector);
		BOOST_CHECK(emptyVector.empty());
	}

	BOOST_AUTO_TEST_SUITE(when_processing_a_vector_with_one_number)

		BOOST_AUTO_TEST_CASE(should_multiply_it_by_itself)
		{
			std::vector<double> numbers = { 2 };
			ProcessVector(numbers);
			 BOOST_CHECK(numbers == std::vector<double>({ 4 }));
		}

	BOOST_AUTO_TEST_SUITE_END()

	BOOST_AUTO_TEST_CASE(multipy_every_element_of_vector_on_min_element_and_sort_them_ascending)
	{
		std::vector<double> numbers = { -4, 0, 5 };
		ProcessVector(numbers);
		BOOST_CHECK(numbers == std::vector<double>({ -20, 0, 16 }));
	}

	BOOST_AUTO_TEST_SUITE(when_processing_a_vector_with_several_same_min_elements)

		BOOST_AUTO_TEST_CASE(should_multipy_every_element_of_vector_on_first_of_same_min_elements)
		{
			std::vector<double> numbers = { -1, -1, 5 };
			ProcessVector(numbers);
			BOOST_CHECK(numbers == std::vector<double>({ -5, 1, 1 }));
		}

	BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE_END()