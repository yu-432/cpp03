/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:19:04 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/15 16:06:38 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
#define CLAPTRAP

#include <iostream>
#include <string>

class ClapTrap {
 public:
  ClapTrap(const std::string& name);
  ClapTrap(const ClapTrap& src);
  virtual ~ClapTrap();
  ClapTrap& operator=(const ClapTrap& src);
  virtual void attack(const std::string& target);
  virtual void takeDamage(const unsigned int& amount);
  virtual void beRepaired(const unsigned int& amount);

 protected:
  std::string _name;
  long _hitPoint;
  long _energyPoint;
  long _attackDamage;
};

#endif