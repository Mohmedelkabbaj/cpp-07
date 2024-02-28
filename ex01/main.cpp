/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kabb <mel-kabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:20:40 by mel-kabb          #+#    #+#             */
/*   Updated: 2024/02/26 20:32:55 by mel-kabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{

    size_t j = 6;
    char *Array = new char[j];
    for (size_t i = 0; i < j; i++)
        Array[i] = i + 65;
    iter(Array, j, print<char &>);
    delete[] Array;

    int tableint[4] = {97, 10, 15, 55};
    iter<int, int>(tableint, 4, change);

    return 0;
}