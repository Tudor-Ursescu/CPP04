/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 14:18:36 by turescu           #+#    #+#             */
/*   Updated: 2025/02/26 12:36:47 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure") {
    std::cout << DEEP_GREEN << "Cure Materia default constructor called" << RESET << std::endl;
}

Cure::Cure(const std::string &type) : AMateria(type) {
    std::cout << DEEP_GREEN << "Cure Materia parameter constructor called" << RESET << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other.getType()) {
    std::cout << DEEP_GREEN << "Cure Materia copy constructor called" << RESET << std::endl;
}

Cure& Cure::operator=(const Cure &other) {
    if (this != &other) {
        AMateria::operator=(other);
    }
    std::cout << DEEP_GREEN << "Cure Materia copy assignment operator called" << RESET << std::endl;
    return *this;
}

Cure::~Cure() {
    std::cout << DEEP_GREEN << "Cure Materia destructor called" << RESET << std::endl;
}

void Cure::use(ICharacter &target) {
    std::cout << DEEP_GREEN << "* heals " << target.getName() << "'s wounds *" << RESET << std::endl; 
}

Cure* Cure::clone() const {
    return new Cure(*this);
}