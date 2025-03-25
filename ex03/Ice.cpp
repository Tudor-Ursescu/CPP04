/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 12:36:01 by turescu           #+#    #+#             */
/*   Updated: 2025/03/03 09:56:48 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice") {
    std::cout << BLUE << "Ice Materia default constructor called" << RESET << std::endl;   
}

Ice::Ice(const std::string& type) : AMateria(type) {
    std::cout << BLUE << "Ice Materia parameter constructor called" << RESET << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other.getType()) {
    std::cout << BLUE << "Ice Materia copy constructor called" << RESET << std::endl;
}

Ice& Ice::operator=(const Ice& other) {
    if(this != &other) {
        AMateria::operator=(other);
    }
    std::cout << BLUE << "Ice Materia copy assignment operator called" << RESET << std::endl;
    return *this;
}

Ice::~Ice() {
    std::cout << BLUE << "Ice Materia destructor called" << RESET << std::endl;
}

void Ice::use(ICharacter &target) {
    std::cout << BLUE << "*shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;                     
}

Ice* Ice::clone() const {
    return new Ice(*this);// returns a new object ice which is a deep copy of the current one
}