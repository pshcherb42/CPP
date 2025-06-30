/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshcherb <pshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 12:29:51 by pshcherb          #+#    #+#             */
/*   Updated: 2025/06/30 21:33:31 by pshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cstdlib>
#include "ex01.hpp"

int main(int argc, char **argv)
{
    std::string command;
	PhoneBook	phoneBook;

    (void)argc;
    (void)argv;

    while (true) {
        std::cout << "Write one of the following commands: ADD, SEARCH, EXIT\n";
        std::cin >> command;
		// handle end of file ctrl+D
        if (command == "ADD") {
			std::string    firstName, lastName, nickName, phoneNumber, darkSecret;

			std::cout << "First Name: ";
			std::cin >> firstName;
			std::cout << "Last Name: ";
			std::cin >> lastName;
			std::cout << "Nick Name: ";
			std::cin >> nickName;
			std::cout << "Phone Number: ";
			std::cin >> phoneNumber;
			std::cout << "Dark Secret: ";
			std::cin >> darkSecret;
			// handle empty fields
            Contact myContact(firstName, lastName, nickName, phoneNumber, darkSecret);
			phoneBook.addContact(myContact);
        } else if (command == "SEARCH") {
			phoneBook.searchContacts();
			std::cout << "Type in the index of the entry to display.\n";
			std::cin >> i;
			std::cout << "First Name: " << sfirstName;
        } else if (command == "EXIT") {
            std::cout << "Exiting the program.\n";
            break;
        } else {
            std::cout << "Invalid command. Please try again.\n";
        }
    }

    return 0;
}