//
// Created by Kamilah Golda on 5/1/22.
//

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {

public:

	Contact();
	~Contact();

	void setFirstName();
	void setLastName();
	void setNickName();
	void setPhoneNumber();
	void setDarkSecret();
	void set();

	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getPhoneNumber() const;
	std::string getDarkSecret() const;

private:

	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkSecret;

};

#endif
