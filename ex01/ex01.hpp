/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshcherb <pshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:37:09 by pshcherb          #+#    #+#             */
/*   Updated: 2025/06/30 21:15:48 by pshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_HPP
#define EX01_HPP
# include <iomanip>

class   Contact
{
	private:
		std::string    firstName;
		std::string    lastName;
		std::string    nickName;
		std::string    phoneNumber;
		std::string    darkSecret;
	public:
		Contact() : firstName(""), lastName(""), nickName(""), phoneNumber(""), darkSecret(""){}
		Contact(std::string fN, std::string lN, std::string nN, std::string pN, std::string dS)
			: firstName(fN), lastName(lN), nickName(nN), phoneNumber(pN), darkSecret(dS) {}
		
		std::string getFirstName() const { return firstName; }
    	std::string getLastName() const { return lastName; }
    	std::string getNickName() const { return nickName; }		
};

class   PhoneBook
{
	private:
		Contact	contacts[8];
		int		contactCount;
		
	public:
		PhoneBook() : contactCount(0) {}
	
		void	addContact(const Contact& contact)
		{
			if (contactCount < 8)
			{
				contacts[contactCount] = contact;
				contactCount++;
			}
			else // add handling more that 8 contacts
			{
				std::cout << "PhoneBook is full. Cannot add more contacts.\n";
			}
		}
		
		std::string truncate(const std::string& text, int width) const {
    		if (text.length() > static_cast<std::string::size_type>(width)) {
        		return text.substr(0, width - 1) + ".";
    		}
    		return text;
		}
		
		void	searchContacts() const {
			const int	columnWidth = 10;
			
			std::cout << std::setw(columnWidth) << std::right << "Index" << "   |   ";
			std::cout << std::setw(columnWidth) << std::right << "First Name" << "   |   "; 
			std::cout << std::setw(columnWidth) << std::right << "Last Name" << "   |   ";
			std::cout << std::setw(columnWidth) << std::right << "Nick Name" << std::endl;
			
			for (int i = 0; i < contactCount; i++) {
				std::cout.width(10);
				std::cout << std::setw(columnWidth) << std::right << i + 1 << "   |   ";
				std::cout << std::setw(columnWidth) << std::right << truncate(contacts[i].getFirstName(), columnWidth) << "   |   ";
				std::cout << std::setw(columnWidth) << std::right << truncate(contacts[i].getLastName(), columnWidth) << "   |   ";
				std::cout << std::setw(columnWidth) << std::right << truncate(contacts[i].getNickName(), columnWidth) << std::endl;
			}
		}
};

#endif