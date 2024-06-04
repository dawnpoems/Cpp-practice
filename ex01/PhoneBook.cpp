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

std::string PhoneBook::TruncateText(const std::string& text, std::string::size_type length) const
{
	
	if (text.length() > length)
	{
		return text.substr(0, length - 1) + ".";
	}
	else
	{
		return text;
	}
}

void PhoneBook::DisplayContacts() const
{
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < this->contact_count; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << TruncateText(this->contacts[i].GetFirstName(), 10) << "|";
		std::cout << std::setw(10) << TruncateText(this->contacts[i].GetLastName(), 10) << "|";
		std::cout << std::setw(10) << TruncateText(this->contacts[i].GetNickname(), 10) << std::endl;
	}
}

void PhoneBook::DisplayOneContact(int idx) const
{
	if (idx < 1 || idx > this->contact_count)
	{
		std::cout << "Invalid index." << std::endl;
		return;
	}
	this->contacts[idx - 1].DisplayOneContact();
}

#endif