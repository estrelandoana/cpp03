/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 10:58:45 by apaula-l          #+#    #+#             */
/*   Updated: 2025/08/17 20:27:44 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    std::string name1, name2;

    std::cout << "Enter the name of your first ScavTrap: ";
    std::cin >> name1;
    ScavTrap scav1(name1);

    std::cout << "Enter the name of your second ScavTrap: ";
    std::cin >> name2;
    ScavTrap scav2(name2);

    scav1.attack(name2);
    scav2.takeDamage(20);

    scav2.attack(name1);
    scav1.takeDamage(20);

    scav1.beRepaired(10);
    scav2.beRepaired(5);

    scav1.guardGate();
    scav2.guardGate();

    return 0;
}
