#include <vector>
#include <iostream>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include "Rmath.h"
#include "neuron.h"

using namespace std;

class network
{
public:
	network(const vector<int> topo[], const int num_layers);
	
private:

};

network::network(const vector<int> topo[], const int num_layers){
	for (int layer_number = 0; layer_number < num_layers; layer_number++){
		for (int layer_x = 0; layer_x < topo[layer_number].size; layer_x++){
			for (int layer_y = 0; layer_y < topo[layer_number][layer_x]; layer_y++){
				cout << "made a neuron" << endl;
			}
		}
	}
}