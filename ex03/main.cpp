/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 10:12:34 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/02 14:34:23 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

int main(void)
{
    FragTrap frag("fragy");
    
    frag.highFivesGuys();
    frag.attack("george");
    frag.highFivesGuys();
    return (0);
}
