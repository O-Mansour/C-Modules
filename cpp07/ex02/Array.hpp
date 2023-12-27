/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:13:04 by omansour          #+#    #+#             */
/*   Updated: 2023/12/27 22:36:13 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
private:
	T*		elts;
	size_t	sz;
public:
	Array<T>() : elts(new T[0]()), sz(0)
	{
	}

	Array<T>(unsigned int n) : elts(new T[n]()), sz(n)
	{
	}

	Array<T>(Array<T> const & other) : elts(NULL), sz(0)
	{
		*this = other;
	}

	Array<T>& operator=(Array<T> const & other)
	{
		if (this != &other)
		{
			if (elts)
				delete[] elts;
			elts = new T[other.sz];
			sz = other.sz;
			for (size_t i = 0; i < sz; i++)
				elts[i] = other.elts[i];
		}
		return *this;
	}

	~Array<T>()
	{
		if (elts)
			delete[] elts;
	}
	
	T& operator[](size_t index) const
	{
		if (index >= sz)
			throw std::out_of_range("Index is out of bounds");
		return elts[index];
	}
	
	size_t const & size() const {
		return sz;
	}
};

#endif
