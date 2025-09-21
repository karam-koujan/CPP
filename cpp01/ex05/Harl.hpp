/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 11:42:13 by kkoujan           #+#    #+#             */
/*   Updated: 2025/09/21 11:47:49 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>


class Harl
{
  private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
  public:
    Harl();
    ~Harl();
    void complain( std::string level );
};


#endif