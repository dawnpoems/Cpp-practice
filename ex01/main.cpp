#include <iostream>
#include "PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string	command;
	int idx(0);

	while (true)
	{
		std::cout << "Enter a command: ";
		std::cin >> command;
		if (command == "ADD")
		{
			std::string	first_name;
			std::string	last_name;
			std::string	nickname;
			std::string	phone_number;
			std::string	darkest_secret;

			std::cout << "Enter first name: ";
			std::cin >> first_name;
			std::cout << "Enter last name: ";
			std::cin >> last_name;
			std::cout << "Enter nickname: ";
			std::cin >> nickname;
			std::cout << "Enter phone number: ";
			std::cin >> phone_number;
			std::cout << "Enter darkest secret :";
			std::cin >> darkest_secret;

			Contact contact(idx, first_name, last_name, nickname, phone_number, darkest_secret);
			phoneBook.AddContact(contact);
			idx++;
		}
		else if (command == "SEARCH")
		{
			phoneBook.DisplayContacts();
			std::cout << "Enter an index: ";
			std::cin >> idx;
			phoneBook.DisplayOneContact(idx);
		}
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command." << std::endl;
	}
	return (0);
}