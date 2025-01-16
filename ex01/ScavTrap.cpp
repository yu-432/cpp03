/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 12:17:13 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/16 11:34:03 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
  std::cout << "ScavTrap " << _name << " Default constructor called"
            << std::endl;
  _hitPoint = 100;
  _energyPoint = 50;
  _attackDamage = 20;
  _is_guard = false;
};

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src) {
  std::cout << "ScavTrap " << _name << " Copy constructor called" << std::endl;
  _is_guard = src._is_guard;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap " << _name << " Destructor called" << std::endl;
};

ScavTrap& ScavTrap::operator=(const ScavTrap& src) {
  std::cout << "ScavTrap " << _name << " Copy assignment operator called"
            << std::endl;
  if(this != &src) {
  _name = src._name;
  _hitPoint = src._hitPoint;
  _energyPoint = src._energyPoint;
  _attackDamage = src._attackDamage;
  _is_guard = src._is_guard;
  }
  return *this;
}

void ScavTrap::attack(const std::string& target) {
  if (_energyPoint <= 0 || _hitPoint <= 0) {
    std::cout << "ScavTrap " << _name << " not enough energy or hit points!"
              << std::endl;
    return;
  }
  std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
            << _attackDamage << " points of damage!" << std::endl;
  _energyPoint--;
}

void ScavTrap::takeDamage(const unsigned int& amount) {
  if (_hitPoint <= 0) {
    std::cout << "ScavTrap " << _name << " not enough hit points!" << std::endl;
    return;
  }
  std::cout << "ScavTrap " << _name << " takes " << amount
            << " points of damage!" << std::endl;
  _hitPoint -= amount;
}

void ScavTrap::beRepaired(const unsigned int& amount) {
  if (_energyPoint <= 0 || _hitPoint <= 0) {
    std::cout << "ScavTrap " << _name
              << " not enough energy or hit points!" << std::endl;
    return;
  }
  std::cout << "ScavTrap " << _name << " repairs " << amount << " hit points!"
            << std::endl;
  _hitPoint += amount;
  _energyPoint--;
}

void ScavTrap::guardGate(void) {
  if (_is_guard) {
    std::cout << "ScavTrap " << _name << " is already GateKeeper!"
              << std::endl;
    return;
  }
  std::cout << "ScavTrap " << _name << " is now GateKeeper!" << std::endl;
  _is_guard = true;
}