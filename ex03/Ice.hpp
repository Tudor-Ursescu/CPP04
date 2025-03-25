/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 12:22:00 by turescu           #+#    #+#             */
/*   Updated: 2025/02/26 12:34:19 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
private:
    std::string type;
public:
    Ice();
    Ice(const std::string& type);
    Ice(const Ice& other);
    Ice& operator = (const Ice& other);
    ~Ice();
    void use(ICharacter &target);
    Ice* clone() const;
};

#endif