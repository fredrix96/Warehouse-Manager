#include "UserCatalog.h"

UserCatalog::UserCatalog(std::string fileName)
{
	initialize(fileName);
}

void UserCatalog::initialize(std::string fileName)
{
	std::ifstream fileReader(fileName);

	std::string name = "";
	std::string password = "";
	std::string userType = "";
	std::string id = "";

	while (fileReader >> name >> password >> userType >> id)
	{
		addUser(name, password, userType, id);
	}
	fileReader.close();
}

void UserCatalog::addUser(std::string name, std::string password, std::string userType, std::string id)
{
	users.push_back(User(name, password, userType, id));
}

bool UserCatalog::findMatch(std::string name, std::string password)
{
	bool match = false;

	for (int i = 0; i < users.size(); i++)
	{
		if (users.at(i).getName() == name && users.at(i).getPassword() == password)
		{
			match = true;
		}
	}
	
	return match;
}