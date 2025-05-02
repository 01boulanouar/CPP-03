/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:07:41 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/02 11:53:58 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H

# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    private:
        bool _guarding_gate;
    public:
        ScavTrap(void);
        ScavTrap(const std::string &name);
        ScavTrap(const ScavTrap &scavtrap);
        ScavTrap &operator=(const ScavTrap &scavtrap);
        ~ScavTrap(void);

        void attack(const std::string& target);
        void guardGate();

};

#endif
