/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 18:12:48 by apyykone          #+#    #+#             */
/*   Updated: 2024/04/14 13:20:45 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap tepi("Tepi");
    ScavTrap jepa("Jepa");
    ClapTrap clappi("Clappi", false);

    clappi.attack("Jepa");
    jepa.takeDamage(20);
    tepi.attack("Jepa");
    jepa.takeDamage(20);
    jepa.beRepaired(10);
    tepi.guardGate();
    return 0;
}

