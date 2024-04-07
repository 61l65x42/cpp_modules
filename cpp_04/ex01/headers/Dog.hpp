/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 14:35:10 by alex              #+#    #+#             */
/*   Updated: 2024/04/07 15:42:13 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{

  private:
    Brain	*brain;

  public:
	Dog();
	Dog(const Dog &copy);
	~Dog();
	Dog &operator=(const Dog &copy);

	void makeSound() const;
};

#endif
