#include "Truck.h"

Truck::Truck(string id, string position) {
	this->id = id;
	this->position = position;
}

Truck::~Truck() {
}

string Truck::getId()
{
	return this->id;
}

string Truck::getPos()
{
	return this->position;
}
