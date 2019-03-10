//Tyler Elliott
//CS3560

#include <cstdarg>
#include <vector>
#include <cmath>

double stddev (int n, ...)
{
	double average = 0; //Holds the average
	double mean = 0; //Holds the mean
	double sum = 0; //Holds the sum
	double output = 0; //Holds the output (standard deviation)
	std::vector <double> input; //Holds the input

	va_list args;
	va_start(args, n);

	for (int i = 0; i < n; i++) //Find the sum (to find the average)
	{
		input.push_back(va_arg(args, int));
		sum += input[i];
	}

	va_end(args);

	average = sum/n; //Find the average (sum divided by the count)

	sum = 0; //Reset sum for the next stage

	for (int i = 0; i < n; i++) //Find the difference between the input and average (for each element) and square
	{
		sum += pow(input[i] - average, 2);
	}

	average = sum/n; //Find the average again (sum of the above calculations and the count)

	output = sqrt(average); //Find the standard deviation by taking the square root

	return output;
}
