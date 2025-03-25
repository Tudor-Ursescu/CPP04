/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:44:16 by turescu           #+#    #+#             */
/*   Updated: 2025/03/03 12:53:57 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int main()
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter *me = new Character("me");
    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter *bob = new Character("bob");
    me->unequip(0);
    me->use(0, *bob);
    me->use(1, *bob);
    delete me;
    delete src;
    delete bob;
    return 0;
}