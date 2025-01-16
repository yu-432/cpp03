/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:18:39 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/16 11:20:46 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main(void) {
  ClapTrap c1("Crap1");
  ClapTrap c2("Crap2");
  
  c1.attack("HumanB");
  for(int i = 0; i < 5; i++)
    c1.takeDamage(3);
  c1.attack("HumanB");
  c1.beRepaired(3);

  for (int i = 0; i < 11; i++)
    c2.attack("HumanB");

  ClapTrap c3(c2);
  c3.attack("HumanB");
}