#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>

class PhoneBook
{
private:
	Contact	contacts[8];
	int		contact_count;

public:
	PhoneBook();
	~PhoneBook();

	int 	GetContactCount() const;
	void	AddContact(const Contact& contact);
	std::string	TruncateText(const std::string& text, std::string::size_type length) const;
	void	DisplayContacts() const;
	void	DisplayOneContact(int idx) const;
};
