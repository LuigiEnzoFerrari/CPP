#ifndef ARRAY_H
# define ARRAY_H

# include <cstdint>
# include <exception>

template <typename T>
class Array {
	private:
		T*			array_;
		uint32_t	size_;

	public:
		Array( void ): size_(0), array_(NULL) {

		};

		Array( uint32_t n ): array_(new T[n]()), size_(n) {

		};

		Array( const Array& src ) {
			*this = src;
		};

		void	applyIter(void (f)(T&)) {
			for (size_t i = 0; i < this->size_; i++) {
				f(this->array_[i]);
			}
		};

		uint32_t size( void ) {
			return (this->size_);
		};

		Array&	operator=( const Array& rhs ) {
			if (this != &rhs) {
				this->array_ = rhs.array_;
				this->size_ = rhs.size_;
			}
            return (*this);
		};

		struct OutOfRange: public std::exception {
			const char *what() const throw() {
				return "It's out of range";
			};
		};

		T&	operator[]( uint32_t index ) {
			if (index >= size_) {
				throw Array::OutOfRange();
			}
			return (this->array_[index]);
		}

		~Array( void ) {
			// delete[] this->array_;
		};
};

#endif
