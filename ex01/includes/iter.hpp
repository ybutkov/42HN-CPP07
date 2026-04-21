/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 22:33:39 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/21 23:45:38 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>
#include <iostream>


template <typename T>
void	iter(T *arr, const std::size_t length, void (*f)(T&))
{
    std::cout << "Function iter() with non-const reference" << std::endl;
    if (!arr || !f)
        return ;
    for (std::size_t i = 0; i < length; ++i)
        f(arr[i]);
}

template <typename T>
void	iter(const T *arr, const std::size_t length, void (*f)(const T&))
{
    std::cout << "Function iter() with const reference" << std::endl;
    if (!arr || !f)
        return ;
    for (std::size_t i = 0; i < length; ++i)
        f(arr[i]);
}

template <typename T>
void f_non_const(T& value)
{
	std::cout << "Function f_non_const: value = " << value << std::endl;
}

template <typename T>
void f_const(const T& value)
{
	std::cout << "Function f_const: value = " << value << std::endl;
}


#endif
