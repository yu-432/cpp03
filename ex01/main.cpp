/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:18:39 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/16 11:36:07 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"

int main(void) {
  ClapTrap c1("ClapA");
  ScavTrap s1("ScavB");
  
  c1.attack("HumanA");

  s1.attack("humanA");
  for(int i = 0; i < 5; i++)
    s1.takeDamage(25);
  s1.beRepaired(25);
  s1.guardGate();
  s1.guardGate();
}