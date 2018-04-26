#ifndef GOODS_ENTRY
#define GOODS_ENTRY

#include <string>

class GoodsEntry
{
public:
	GoodsEntry(int entryID, std::string location);

private:
	int entryID;
	std::string location;
};

#endif