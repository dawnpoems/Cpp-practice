#include <iostream>
#include <sstream>
#include "PhoneBook.hpp"

void add_contact(PhoneBook &phoneBook)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "[Please enter details to add a contact]" << std::endl;
	while (first_name.empty())
	{
		std::cout << "Enter first name >> ";
		std::getline(std::cin, first_name);
		if (first_name.empty())
			std::cout << "First name cannot be empty." << std::endl;
	}
	while (last_name.empty())
	{
		std::cout << "Enter last name >> ";
		std::getline(std::cin, last_name);
		if (last_name.empty())
			std::cout << "Last name cannot be empty." << std::endl;
	}
	while (nickname.empty())
	{
		std::cout << "Enter nickname >> ";
		std::getline(std::cin, nickname);
		if (nickname.empty())
			std::cout << "Nickname cannot be empty." << std::endl;
	}
	while (phone_number.empty())
	{
		std::cout << "Enter phone number >> ";
		std::getline(std::cin, phone_number);
		if (phone_number.empty())
			std::cout << "Phone number cannot be empty." << std::endl;
	}
	while (darkest_secret.empty())
	{
		std::cout << "Enter darkest secret >> ";
		std::getline(std::cin, darkest_secret);
		if (darkest_secret.empty())
			std::cout << "Darkest secret cannot be empty." << std::endl;
	}
	Contact contact(first_name, last_name, nickname, phone_number, darkest_secret);
	phoneBook.AddContact(contact);
	std::cout << "[A new contact has been successfully added]" << std::endl;
}

void search_contact(PhoneBook &phoneBook)
{
	int idx;

	phoneBook.DisplayContacts();
	if (phoneBook.GetContactCount() == 0)
		return;
	std::cout << "[Please enter an index to view the details]" << std::endl;
	std::cout << "Enter an index >> ";
	std::string command;
	std::getline(std::cin, command);

	if (std::stringstream(command) >> idx && 1 <= idx && idx <= phoneBook.GetContactCount())
		phoneBook.DisplayOneContact(idx);
	else
		std::cout << "Invalid index." << std::endl;
}

int main()
{
	PhoneBook phoneBook;
	std::string command;

	while (true)
	{
		std::cout << "Enter a command >> ";
		std::getline(std::cin, command);

		if (command == "ADD")
		{
			add_contact(phoneBook);
		}
		else if (command == "SEARCH")
		{
			search_contact(phoneBook);
		}
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command." << std::endl;
	}
	return 0;
}