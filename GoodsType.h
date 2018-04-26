#ifndef GOODS_TYPE
#define GOODS_TYPE

#include "GoodsEntry.h"
#include <vector>

class GoodsType
{
public:
	GoodsType(std::string name);

	std::string getName();
	int getAmount();
	void addGoodsEntry(std::string location);

private:
	std::string name;

	std::vector<GoodsEntry> entries;
};

#endif