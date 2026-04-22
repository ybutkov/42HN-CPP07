/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:02:24 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/22 17:15:12 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
# define ARRAY_HPP

#pragma once
#include <cstddef>
#include <fstream>
#include <iostream>


template <typename T>
class Array {
    T* array;
    unsigned int length;
    void initArray(unsigned int n);
    void copyArray(const Array& other);
  public:
    Array(): Array(0) { };
    Array(unsigned int n);
    Array(const Array& other);
    Array& operator=(const Array& other);
    ~Array();

    T& operator[](int index);
    const T& operator[](int index) const;
    std::size_t size() const;
};

template <typename T>
std::ostream& operator<<(std::ostream& os, const Array<T>& arr);

#include "Array.tpp"


#endif
