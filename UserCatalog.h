#ifndef USERCATALOG_H
#define USERCATALOG_H

#include "User.h"
#include <vector>
#include <string>
#include <fstream>
#include <iostream>

class UserCatalog
{
private:
	void initialize(std::string fileName);
	std::vector<User> users;
	
public:
	UserCatalog(std::string fileName);
	void addUser(std::string name, std::string password, std::string userType, std::string id);
	bool findMatch(std::string name, std::string password);
};

#endif // !USERCATALOG_H