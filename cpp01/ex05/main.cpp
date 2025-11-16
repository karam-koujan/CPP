/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 09:40:02 by kkoujan           #+#    #+#             */
/*   Updated: 2025/09/21 12:39:16 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"



int main()
{
    Harl harl = Harl();
    harl.complain("debug");
    harl.complain("info");
    harl.complain("warning");
    harl.complain("error");
    harl.complain("sleep");
}