#include "GoodsType.h"

GoodsType::GoodsType(std::string name)
{
	this->name = name;
}

std::string GoodsType::getName()
{
	return name;
}

int GoodsType::getAmount()
{
	return entries.size();
}

void GoodsType::addGoodsEntry(std::string location)
{
	entries.push_back(GoodsEntry(entries.size(), location));
}
