/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:22:38 by fcarranz          #+#    #+#             */
/*   Updated: 2024/11/14 13:28:50 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

#include <cmath>
#include <iostream>

Fixed::Fixed(void) : fixedPoint(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(const Fixed &rhs) {
  std::cout << "Copy constructor called" << std::endl;
  *this = rhs;
}

Fixed &Fixed::operator=(const Fixed &rhs) {
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &rhs) {
    this->fixedPoint = rhs.getRawBits();
  }
  return *this;
}

Fixed::Fixed(const int nb) : fixedPoint(nb * (1 << width)) {
  std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb) : fixedPoint(roundf(nb * (1 << width))) {
  std::cout << "Float constructor called" << std::endl;
}

int Fixed::getRawBits(void) const { return this->fixedPoint; }

void Fixed::setRawBits(const int raw) { this->fixedPoint = raw; }

float Fixed::toFloat(void) const {
  return ((float)this->fixedPoint / (1 << width));
}

int Fixed::toInt(void) const { return (this->fixedPoint / (1 << width)); }

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed) {
  stream << fixed.toFloat();
  return stream;
}

/*
Comparison operators
*/
bool Fixed::operator>(const Fixed &rhs) const {
  return getRawBits() > rhs.getRawBits();
}

bool Fixed::operator<(const Fixed &rhs) const {
  return getRawBits() < rhs.getRawBits();
}

bool Fixed::operator>=(const Fixed &rhs) const {
  return getRawBits() >= rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed &rhs) const {
  return getRawBits() <= rhs.getRawBits();
}

bool Fixed::operator==(const Fixed &rhs) const {
  return getRawBits() == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed &rhs) const {
  return getRawBits() != rhs.getRawBits();
}
