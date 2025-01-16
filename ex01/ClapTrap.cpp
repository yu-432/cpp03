/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:29:35 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/16 11:31:35 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(const std::string& name)
    : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0) {
  std::cout << "ClapTrap " << _name << " Default constructor called"
            << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap& right)
    : _name(right._name),
      _hitPoint(right._hitPoint),
      _energyPoint(right._energyPoint),
      _attackDamage(right._attackDamage) {
  std::cout << "ClapTrap " << _name << " Copy constructor called" << std::endl;
};

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap " << _name << " Destructor called" << std::endl;
};

ClapTrap& ClapTrap::operator=(const ClapTrap& right) {
  std::cout << "ClapTrap " << _name << " Copy assignment operator called"
            << std::endl;
  if (this != &right) {
    _name = right._name;
    _energyPoint = right._energyPoint;
    _attackDamage = right._attackDamage;
    _hitPoint = right._hitPoint;
  }
  return *this;
}

void ClapTrap::attack(const std::string& target) {
  if (_energyPoint <= 0 || _hitPoint <= 0) {
    std::cout << "ClapTrap " << _name << " not enough energy or hit points!"
              << std::endl;
    return;
  }
  std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
            << _attackDamage << " points of damage!" << std::endl;
  _energyPoint--;
}

void ClapTrap::takeDamage(const unsigned int& amount) {
  if (_hitPoint <= 0) {
    std::cout << "ClapTrap " << _name << " not enough hit points!" << std::endl;
    return;
  }
  std::cout << "ClapTrap " << _name << " takes " << amount
            << " points of damage!" << std::endl;
  _hitPoint -= amount;
}

void ClapTrap::beRepaired(const unsigned int& amount) {
  if (_energyPoint <= 0 || _hitPoint <= 0) {
    std::cout << "ClapTrap " << _name
              << " not enough energy or hit points!" << std::endl;
    return;
  }
  std::cout << "ClapTrap " << _name << " repairs " << amount << " hit points!"
            << std::endl;
  _hitPoint += amount;
  _energyPoint--;
}
