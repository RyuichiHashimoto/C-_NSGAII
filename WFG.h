#pragma once

#include<vector>
#include<math.h>
#include <algorithm>
#include"Problem.h"
class WFG :public Problem{

	/**
	* stores a epsilon default value
	*/
protected:
	const double epsilon = (double)1e-7;

	 int k_; //Var for walking fish group
	 int M_;
	 int l_;
	 std::vector<int> A_;
	 std::vector<int> S_;
	 int D_ = 1;
//	 Random random = new Random();

	 double max(double a, double b) { return a > b ? a : b;}

	
public:

	WFG(int k, int  l, int  M);

	std::vector<double>  calculate_x(std::vector<double>  t);
	
	
	std::vector<double>  normalise(std::vector<double>  z);
	
	double correct_to_01(double a);

	std::vector<double>  subVector(std::vector<double>  z, int head, int tail);


	virtual std::vector<double>  evaluate(std::vector<double>  variables) = 0;;
	// evaluate
};
