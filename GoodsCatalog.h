#ifndef GOODS_CATALOG
#define GOODS_CATALOG

#include "GoodsType.h"
#include <vector>

class GoodsCatalog
{
public:
	GoodsCatalog(std::string fileName);

	void addGoods(std::string typeName, std::string location);
private:
	std::vector<GoodsType> goodsTypes;

	void loadFromFile(std::string fileName);
};

#endif