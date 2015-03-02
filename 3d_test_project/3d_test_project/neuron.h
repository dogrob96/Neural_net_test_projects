#include <vector>
#include <iostream>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include "Rmath.h"
using namespace std;

struct Connection
{
	double weight;
	double delta_weight;
};
class Neuron;

typedef vector<Neuron> layer;

class Neuron
{
public:
	Neuron(unsigned num_Outputs, unsigned num_Inputs, unsigned Index);


private:
	static double transfer_function(double tanh(double) , double x);
	static double transfer_function_derivative(double tanh(double) ,double x);

	double m_gradinet;
};

double Neuron::transfer_function(double (*f)(double), double x){
	return f(x);
}

double Neuron::transfer_function_derivative(double (*f)(double), double x){
	return get_derivative(f, x);
}