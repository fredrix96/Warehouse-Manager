#include "User.h"

User::User(std::string name, std::string password, std::string userType, std::string id)
{
	this->name = name;
	this->password = password;
	this->userType = userType;
	this->id = id;
}

std::string User::getName()
{
	return this->name;
}

std::string User::getPassword()
{
	return this->password;
}

std::string User::getUserType()
{
	return this->userType;
}

std::string User::getUserId()
{
	return this->id;
}