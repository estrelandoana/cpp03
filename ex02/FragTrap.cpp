/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 21:04:26 by apaula-l          #+#    #+#             */
/*   Updated: 2025/08/17 21:04:26 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " constructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy) {
    *this = copy;
    std::cout << "FragTrap " << _name << " copied!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << _name << " destroyed!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy) {
    if (this != &copy){
        _name = copy._name;
        _hitPoints = copy._hitPoints;
        _energyPoints = copy._energyPoints;
        _attackDamage = copy._attackDamage;
    }
    return *this;
}

void FragTrap::attack(const std::string& target) {
    if (_hitPoints <= 0 || _energyPoints <= 0) {
        std::cout << "FragTrap " << _name << " can't attack!" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << _name << " requests a positive high five!" << std::endl;
}
