/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:07:59 by fcarranz          #+#    #+#             */
/*   Updated: 2024/11/06 19:13:00 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed( void )
	: fixedPoint( 0 )
{
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed( Fixed& other )
{
	if ( this != &other ) {
		std::cout << "Copy constructor called" << std::endl;
		this->fixedPoint = other.getRawBits();
	}
}

Fixed& Fixed::operator=( Fixed& other ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &other ) {
		this->fixedPoint = other.getRawBits();
	}
	return *this;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) {
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPoint;
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPoint = raw;
}
