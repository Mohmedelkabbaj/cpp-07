/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kabb <mel-kabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:31:34 by mel-kabb          #+#    #+#             */
/*   Updated: 2024/02/26 19:46:50 by mel-kabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array
{
private:
    T *array;
    unsigned int size;

public:
    Array() : array(NULL), size(0) {}
    Array(unsigned int n) : array(new T[n]), size(n) {}
    // deep copy
    Array(const Array &src) : array(new T[src.size]), size(src.size)
    {
        for (unsigned int i = 0; i < size; i++)
        {
            array[i] = src.array[i];
        }
    }

    ~Array()
    {
        delete[] array;
    }
    //
    Array &operator=(const Array &src)
    {
        if (this != &src)
        {
            delete[] array;
            array = new T[src.size];
            size = src.size;
            for (unsigned int i = 0; i < size; i++)
            {
                array[i] = src.array[i];
            }
        }
        return *this;
    }
    T &operator[](unsigned int i)
    {
        if (i >= size)
        {
            throw std::out_of_range("Index out of range");
        }
        return array[i];
    }
    unsigned int size1() const
    {
        return size;
    }
};

#endif