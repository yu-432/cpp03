/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:05:12 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/16 12:31:29 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
  std::cout << "FragTrap " << _name << " Default constructor called"
            << std::endl;
  _hitPoint = 100;
  _energyPoint = 100;
  _attackDamage = 30;
};

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src) {
  std::cout << "FragTrap " << _name << " Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src) {
  std::cout << "FragTrap " << _name << " Copy assignment operator called"
            << std::endl;
  if (this != &src) {
    _name = src._name;
    _hitPoint = src._hitPoint;
    _energyPoint = src._energyPoint;
    _attackDamage = src._energyPoint;
  }
  return *this;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap " << _name << " Destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target) {
  if (_energyPoint <= 0 || _hitPoint <= 0) {
    std::cout << "FragTrap " << _name << " not enough energy or hit points!"
              << std::endl;
    return;
  }
  std::cout << "FragTrap " << _name << " attacks " << target << ", causing "
            << _attackDamage << " points of damage!" << std::endl;
  _energyPoint--;
}

void FragTrap::takeDamage(const unsigned int& amount) {
  if (_hitPoint <= 0) {
    std::cout << "FragTrap " << _name << " not enough hit points!" << std::endl;
    return;
  }
  std::cout << "FragTrap " << _name << " takes " << amount
            << " points of damage!" << std::endl;
  _hitPoint -= amount;
}

void FragTrap::beRepaired(const unsigned int& amount) {
  if (_energyPoint <= 0 || _hitPoint <= 0) {
    std::cout << "FragTrap " << _name << " not enough energyor hit points!"
              << std::endl;
    return;
  }
  std::cout << "FragTrap " << _name << " repairs " << amount << " hit points!"
            << std::endl;
  _hitPoint += amount;
  _energyPoint--;
}

void FragTrap::highFivesGuys(void) {
  if (_hitPoint <= 0) {
    std::cout << "FragTrap " << _name << " not enough hit points!" << std::endl;
    return;
  }
  std::cout << "FragTrap " << _name << " request  positive high fives!"
            << std::endl;
}
