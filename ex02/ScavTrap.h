/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 12:11:56 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/15 19:21:45 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP
#define SCAVTRAP

#include "ClapTrap.h"

class ScavTrap : public ClapTrap {
 public:
  ScavTrap(const std::string& name);
  ScavTrap(const ScavTrap& src);
  ~ScavTrap();
  ScavTrap& operator=(const ScavTrap& src);
  void attack(const std::string& target);
  void takeDamage(const unsigned int& amount);
  void beRepaired(const unsigned int& amount);
  void guardGate();

 private:
  bool _is_guard;
};

#endif
