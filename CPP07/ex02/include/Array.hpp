#ifndef ARRAY_H
# define ARRAY_H

# include <stdint.h>
# include <exception>
# include <cstddef>

template <typename T>
class Array {
	private:
		T*			_array;
		uint32_t	_size;

	public:
		Array( void ): _array(NULL), _size(0) {
		};

		Array( uint32_t n ): _array(new T[n]()), _size(n) {
		};

		Array( const Array& src ) {
			*this = src;
		};

		void	applyIter(void (f)(T&)) {
			for (uint32_t i = 0; i < this->_size; i++) {
				f(this->_array[i]);
			}
		};

		uint32_t size( void ) {
			return (this->_size);
		};

		Array&	operator=( const Array& rhs ) {
			if (this != &rhs) {
				this->_size = rhs._size;
                this->_array = new T[rhs._size];
                for (uint32_t i = 0; i < this->_size; i++) {
                    this->_array[i] = rhs._array[i];
                }
			}
            return (*this);
		};

		struct OutOfRange: public std::exception {
			const char *what() const throw() {
				return "It's out of range";
			};
		};

		T&	operator[]( uint32_t index ) {
			if (index >= _size) {
				throw Array::OutOfRange();
			}
			return (this->_array[index]);
		}

		~Array( void ) {
			delete[] this->_array;
		};
};

#endif
