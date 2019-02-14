//Tyler Elliott
//CS3560

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

/** \brief This function calculates the standard deviation
*       from a set of given numbers
*   \param int* a:
*	A pointer to an int array
*   \param int n:
*       The number of entries in int* a
*   \return Returns the standard deviation (double)
*/

int deviation( int* a, int n )
{
	vector <double> v; //Declare a vector

	for (size_t i = 0; i <= n - 1; i++) //Fill vector with ints from int* a
	{
		v.push_back(a[i]);
	}
	
	double sum; //Holds the sum of the numbers

	for(size_t i = 0; i <= v.size() - 1; i++) //Find the sum
	{
		sum += v[i];
	} 

	double mean = sum /= v.size(); //Find the mean

	double stddev = 0; //Initialize a double for the standard deviation

	for(size_t i = 0; i <= v.size() -1; i++) //Add every entry using the equation (v[i]-mean)^2
	{
		stddev = stddev + (v[i] - mean) * (v[i] - mean); 
	}

	stddev = stddev / v.size(); //Divide the current stddev by the size of the vector

	if(stddev == 0)
		std::cout << "Sigma is zero." << std::endl;

	return sqrt(stddev); //Return the square root of stddev, so returning the standard deviation
}
