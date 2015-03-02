#include "neuron.h"
#include "network.h"
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

using namespace std;

int main(){
	 vector<int> topo[1];
	topo[1].push_back(5);
	network(topo, 1);
}