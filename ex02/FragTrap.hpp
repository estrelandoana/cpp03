/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 20:56:47 by apaula-l          #+#    #+#             */
/*   Updated: 2025/08/17 21:03:08 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap(const std::string& name);
        FragTrap(const FragTrap& copy);
        ~FragTrap();

        FragTrap& operator=(const FragTrap& copy);

        void attack(const std::string& target);
        void highFivesGuys(void);
};

#endif
