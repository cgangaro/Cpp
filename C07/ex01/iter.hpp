#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void iter(T const array[], int const &size, void (*function)(T const &content))
{
	for (int i = 0; i < size; i++)
	{
		(*function)(array[i]);
	}
}

#endif