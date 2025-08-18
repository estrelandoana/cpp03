/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 00:14:13 by apaula-l          #+#    #+#             */
/*   Updated: 2025/08/17 20:47:23 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " constructed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy) {
    *this = copy;
    std::cout << "ScavTrap " << _name << " copied!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " destroyed!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy) {
    if (this != &copy){
        ClapTrap::operator=(copy);
    }
    return *this;
}

void ScavTrap::attack(const std::string& target) {
    if (_hitPoints <= 0 || _energyPoints <= 0) {
        std::cout << "ScavTrap " << _name << " can't attack!" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ScavTrap " << _name << " ferociously attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}
