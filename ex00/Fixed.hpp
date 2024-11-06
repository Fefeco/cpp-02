/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:07:56 by fcarranz          #+#    #+#             */
/*   Updated: 2024/11/06 19:07:11 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed {

public:
	Fixed( void );
	Fixed( Fixed& other );
	Fixed& operator=( Fixed& other );
	~Fixed( void );
	int		getRawBits( void );
	void	setRawBits( int const raw );

private:
	static const int	width = 8;
	int					fixedPoint;
};