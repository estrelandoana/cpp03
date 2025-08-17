/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 10:58:45 by apaula-l          #+#    #+#             */
/*   Updated: 2025/08/17 11:52:48 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    std::string name1, name2;

    // Ask for the first ClapTrap's name
    std::cout << "Enter the name of your first ClapTrap: ";
    std::cin >> name1;
    ClapTrap clap1(name1);

    // Ask for the second ClapTrap's name
    std::cout << "Enter the name of your second ClapTrap: ";
    std::cin >> name2;
    ClapTrap clap2(name2);

    // Example actions
    clap1.attack(name2);
    clap2.takeDamage(3);

    clap2.attack(name1);
    clap1.takeDamage(4);

    clap1.beRepaired(5);
    clap2.beRepaired(2);

    clap1.attack(name2);
    clap2.takeDamage(6);

    return 0;
}