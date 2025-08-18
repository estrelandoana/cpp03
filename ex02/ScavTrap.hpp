/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 19:34:05 by apaula-l          #+#    #+#             */
/*   Updated: 2025/08/17 20:26:46 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(const std::string& name);
        ScavTrap(const ScavTrap& copy);
        ~ScavTrap();

        ScavTrap& operator=(const ScavTrap& copy);

        void attack(const std::string& target);
        void guardGate();

};

#endif
