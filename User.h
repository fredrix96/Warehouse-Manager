#ifndef USER_H
#define USER_H

#include <string>

class User
{
private:
	std::string name;
	std::string password;
	std::string userType;
	std::string id;


public:
	User(std::string name, std::string password, std::string userType, std::string id);
	std::string getName();
	std::string getPassword();
	std::string getUserType();
	std::string getUserId();

};

#endif // !USER_H