/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:28:17 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/30 17:02:18 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal {

	public:
		Animal( void );
		Animal( Animal const & src);
		~Animal( void );

		Animal const	& operator=(Animal const & rhs);

		std::string		getType() const;
		virtual void	makeSound() const;

	protected:
		std::string	type;
};

#endif