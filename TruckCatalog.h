#ifndef TRUCK_CATALOG
#define TRUCK_CATALOG

#include "Truck.h"
#include <vector>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

class TruckCatalog
{
public:
	TruckCatalog(string fileName);
	~TruckCatalog();
	string getTruckPosition(string id);

private:
	vector<Truck> truck;
	void loadFromFile(string fileName);
	void addTruck(string id, string position);
};

#endif
