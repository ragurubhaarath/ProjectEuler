//*******************************************   PROBLEM NO: 1   ***************************************//
//                                                                                                     //
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.     //
// The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.           //
//                                                                                                     //
//*****************************************************************************************************//

#include<iostream>

using namespace std;

long long sumOfMultiples(long long m, long long N);

int main()
{
	long long sum = sumOfMultiples(3,999)               
	                + sumOfMultiples(5,999) 
	                - sumOfMultiples(15,999);
	cout<<sum<<endl;
	return 0;
}

// Gives sum of all multiples of m that are less than or equal to N
long long sumOfMultiples(long long m, long long N)
{
	long long n = N/m;
	return m*((n*(n + 1))/2);
}
