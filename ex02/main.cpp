/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 10:58:45 by apaula-l          #+#    #+#             */
/*   Updated: 2025/08/17 20:55:37 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    std::string nameClap, nameScav, nameFrag;

    std::cout << "Enter the name of your ClapTrap: ";
    std::cin >> nameClap;
    ClapTrap clap(nameClap);

    std::cout << "Enter the name of your ScavTrap: ";
    std::cin >> nameScav;
    ScavTrap scav(nameScav);

    std::cout << "Enter the name of your FragTrap: ";
    std::cin >> nameFrag;
    FragTrap frag(nameFrag);

    clap.attack(nameScav);
    scav.takeDamage(10);

    scav.attack(nameClap);
    clap.takeDamage(5);

    frag.attack(nameScav);
    scav.takeDamage(20);

    clap.beRepaired(5);
    scav.beRepaired(3);
    frag.beRepaired(10);

    scav.guardGate();
    frag.highFivesGuys();

    return 0;
}
