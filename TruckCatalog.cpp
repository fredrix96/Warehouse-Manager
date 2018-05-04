#include "TruckCatalog.h"
#include <iomanip> //setprecision
#include <sstream> //stringstream

TruckCatalog::TruckCatalog(string fileName)
{
	loadFromFile(fileName);
}

TruckCatalog::~TruckCatalog(){
}

string TruckCatalog::getTruckPosition(string id)
{
	bool exists = false;
	string pos = "There exists no such truck\n";

	for (int i = 0; i < truck.size(); i++)
	{
		if (truck.at(i).getId() == id)
		{
			// If the truck exists, return its position
			pos = truck.at(i).getPos();
			exists = true;
			break;
		}
	}

	if (exists == true) {
		return "The truck " + id + " is on the position " + pos + ".\n";
	}

	else {
		return pos;
	}
}

void TruckCatalog::loadFromFile(string fileName)
{
	string id = "";
	string position = "";
	float posX = 0;
	float posY = 0;
	ifstream inFile;
	inFile.open(fileName);

	if (!inFile) {
		cout << "Error reading file!";
	}

	else {
		while (inFile >> id >> posX >> posY)
		{
			stringstream x, y;
			x << setprecision(3) << posX;
			y << setprecision(3) << posY;

			position = "(" + x.str() + ", " + y.str() + ")";

			addTruck(id, position);
		}	
	}
	inFile.close();
}

void TruckCatalog::addTruck(string id, string position)
{
	truck.push_back(Truck(id, position));
}
