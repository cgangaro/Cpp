#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : private std::stack<T>
{
    public:
        MutantStack(/* args */) {};
        MutantStack<T>(MutantStack<T> const & src) { *this = src; }
		MutantStack<T> & operator=(MutantStack<T> const & rhs) 
        { 
            if (*this != &rhs) 
                *this = new std::stack<T>(rhs); 
            return *this;
        }
        virtual ~MutantStack() {};

        using std::stack<T>::empty;
        using std::stack<T>::size;
        using std::stack<T>::top;
        using std::stack<T>::push;
        using std::stack<T>::pop;

        typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator begin() {return std::stack<T>::c.begin();};
		iterator end() {return std::stack<T>::c.end();};
		const_iterator cbegin() const {return std::stack<T>::c.cbegin();};
		const_iterator cend() const {return std::stack<T>::c.cend();};
		reverse_iterator rbegin() {return std::stack<T>::c.rbegin();};
		reverse_iterator rend() {return std::stack<T>::c.rend();};
		const_reverse_iterator crbegin() const {return std::stack<T>::c.crbegin();};
		const_reverse_iterator crend() const {return std::stack<T>::c.crend();};
    
    
};

#endif