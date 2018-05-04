#ifndef TRUCK
#define TRUCK

#include <vector>

using namespace std;

class Truck
{
public:
	Truck(string id, string position);
	~Truck();
	string getId();
	string getPos();

private:
	string id;
	string position;
};

#endif
