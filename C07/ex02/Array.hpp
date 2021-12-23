#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	public :

		class Error_Id: public std::exception
		{
			public:

				const char *what() const throw()
				{
					return ("Error id");
				}
		};

		Array(): _array(NULL), _size(0)
		{
			return ;
		}

		Array(unsigned int n): _size(n)
		{
			_array = new T[_size];
			return ;
		}

		Array(Array const &copy)
		{
			_array = copy._array;
			_size = copy._size;
		}

		Array &operator=(Array const &copy)
		{
			_array = copy._array;
			_size = copy._size;
			return (*this);
		}

		T	&operator[](unsigned int const &id)
		{
			if (id >= _size || id < 0)
				throw Error_Id();
			else
				return (_array[id]);
		}

		unsigned int &size()
		{
			return (_size);
		}

		~Array()
		{
			return ;
		}

	private :

		T *_array;
		unsigned int _size;
};

#endif