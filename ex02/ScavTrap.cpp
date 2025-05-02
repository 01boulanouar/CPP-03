/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 10:12:28 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/02 11:52:43 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap " << _name << " Default constructor called" << std::endl;
}


ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap " << _name << " Name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) : ClapTrap(scavtrap)
{
    *this = scavtrap;
    std::cout << "ScavTrap " << _name << " Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
    if (this != &scavtrap)
    {
        _name = scavtrap._name;
        _hit_points = scavtrap._hit_points;
        _energy_points= scavtrap._energy_points;
        _attack_damage= scavtrap._attack_damage;
        std::cout << "ScavTrap " << _name << " Copy assignment operator called" << std::endl;
    }
    return *this;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << _name << " Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_hit_points <= 0)
    {
        std::cout << "ScavTrap " << _name << " could not attack. No hit points." << std::endl;
        return ;
    }
    else if (_energy_points <= 0)
    {
        std::cout << "ScavTrap " << _name << " could not attack. No energie points." << std::endl;
        return ;
    }
    else
    {
        _energy_points--;
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
    }
}

void ScavTrap::guardGate()
{
    if (_hit_points <= 0)
    {
        std::cout << "ScavTrap " << _name << " could not Guard Gate. No hit points." << std::endl;
        return ;
    }
    else if (_energy_points <= 0)
    {
        std::cout << "ScavTrap " << _name << " could not Guard Gate. No energie points." << std::endl;
        return ;
    }
    else if (_guarding_gate)
    {
        std::cout << "ScavTrap " << _name << " is already guarding the gate." << std::endl;
        return ;
    }
    else
    {
        _energy_points--;
        _guarding_gate = true;
        std::cout << "ScavTrap "<< _name << " is now in Gate keeper mode." << std::endl;
    }
}
