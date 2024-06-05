#ifndef PHONEBOOK_CPP
#define PHONEBOOK_CPP

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contact_count(0)
{
}

PhoneBook::~PhoneBook()
{
}

int PhoneBook::GetContactCount() const
{
	return this->contact_count;
}

std::string PhoneBook::TruncateText(const std::string& text, std::string::size_type length) const
{
	if (text.length() > length)
	{
		return text.substr(0, length - 1) + ".";
	}
	else if (text.length() < length)
	{
		std::string paddedText = std::string(length - text.length(), ' ') + text;
		return paddedText;
	}
	else
	{
		return text;
	}
}

void PhoneBook::AddContact(const Contact& contact)
{
	if (this->contact_count < 8)
	{
		this->contacts[this->contact_count] = contact;
		this->contact_count++;
	}
	else
	{
		for (int i = 0; i < this->contact_count - 1; i++)
		{
			this->contacts[i] = this->contacts[i + 1];
		}
		this->contacts[this->contact_count - 1] = contact;
	}
}

void PhoneBook::DisplayContacts() const
{
	if (this->contact_count == 0)
	{
		std::cout << "No contacts." << std::endl;
		return;
	}
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < this->contact_count; i++)
	{
		std::cout << TruncateText(std::to_string(i + 1), 10) << "|";
		std::cout << TruncateText(this->contacts[i].GetFirstName(), 10) << "|";
		std::cout << TruncateText(this->contacts[i].GetLastName(), 10) << "|";
		std::cout << TruncateText(this->contacts[i].GetNickname(), 10) << std::endl;
	}
}

void PhoneBook::DisplayOneContact(int idx) const
{
	if (idx < 1 || idx > this->contact_count)
	{
		std::cout << "Invalid index." << std::endl;
	}
	else
	{
		this->contacts[idx - 1].DisplayOneContact();
	}
}

#endif