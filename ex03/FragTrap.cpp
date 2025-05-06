/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 10:12:28 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/03 13:34:43 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "FragTrap " << _name << " Default constructor called" << std::endl;
}


FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "FragTrap " << _name << " Name constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap) : ClapTrap(fragtrap)
{
    *this = fragtrap;
    std::cout << "FragTrap " << _name << " Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
    if (this != &fragtrap)
    {
        _name = fragtrap._name;
        _hit_points = fragtrap._hit_points;
        _energy_points = fragtrap._energy_points;
        _attack_damage = fragtrap._attack_damage;
        std::cout << "FragTrap " << _name << " Copy assignment operator called" << std::endl;
    }
    return *this;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << _name << " Destructor called" << std::endl;
}


void FragTrap::highFivesGuys(void)
{
    if (_hit_points <= 0)
    {
        std::cout << "FragTrap " << _name << " could not High Five. No hit points." << std::endl;
        return ;
    }
    else if (_energy_points <= 0)
    {
        std::cout << "FragTrap " << _name << " could not High Five. No energie points." << std::endl;
        return ;
    }
    else
    {
        _energy_points--;
        std::cout << "FragTrap "<< _name << " High Five you guys 🖐️" << std::endl;
    }
}
