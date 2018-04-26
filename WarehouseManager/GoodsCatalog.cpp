#include "GoodsCatalog.h"

GoodsCatalog::GoodsCatalog(std::string fileName)
{
	loadFromFile(fileName);
}

void GoodsCatalog::addGoods(std::string typeName, std::string location)
{
	// See if the goods type already exists
	bool typeExists = false;

	for (int i = 0; i < goodsTypes.size(); i++)
	{
		if (goodsTypes.at(i).getName() == typeName)
		{
			// If the type exists, tell the goodsType to add a new entry
			typeExists = true;
			goodsTypes.at(i).addGoodsEntry(location);
			break;
		}
	}

	// If the goods type does not already exist, add a new one
	if (!typeExists)
	{
		goodsTypes.push_back(GoodsType(typeName));
		goodsTypes.back().addGoodsEntry(location);
	}
}
