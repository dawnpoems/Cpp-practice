#include <iostream>
#include <string>
#include <sstream>
#include "PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string command;

	while (true)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, command);

		if (command == "ADD")
		{
			std::string first_name;
			std::string last_name;
			std::string nickname;
			std::string phone_number;
			std::string darkest_secret;

			std::cout << "Enter first name: ";
			std::getline(std::cin, first_name);
			std::cout << "Enter last name: ";
			std::getline(std::cin, last_name);
			std::cout << "Enter nickname: ";
			std::getline(std::cin, nickname);
			std::cout << "Enter phone number: ";
			std::getline(std::cin, phone_number);
			std::cout << "Enter darkest secret: ";
			std::getline(std::cin, darkest_secret);

			Contact contact(first_name, last_name, nickname, phone_number, darkest_secret);
			phoneBook.AddContact(contact);
		}
		else if (command == "SEARCH")
		{
			phoneBook.DisplayContacts();
			if (phoneBook.GetContactCount() == 0)
				continue;
			std::cout << "Enter an index: ";
			std::getline(std::cin, command);
			
			int idx;
			if (std::stringstream(command) >> idx)
				phoneBook.DisplayOneContact(idx);
			else
				std::cout << "Invalid index." << std::endl;
		}
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command." << std::endl;
	}
	return 0;
}