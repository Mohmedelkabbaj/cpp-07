/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kabb <mel-kabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:21:10 by mel-kabb          #+#    #+#             */
/*   Updated: 2024/02/26 20:30:27 by mel-kabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T, typename A>

void iter(T *array, int length, void (*f)(A))
{
    for (int i = 0; i < length; i++)
    {
        f(array[i]);
    }
}

template <typename T>
void print(T &x)
{
    std::cout << x << std::endl;
}

template <typename T>

void change(T x)
{
    // x = x + 1;
    if (x == 'a')
        std::cout << "b" << std::endl;
    else if (x == 'b')
        std::cout << "a" << std::endl;
    else if (x == 'c')
        std::cout << "c" << std::endl;
    else
        std::cout << x << std::endl;
}

#endif
