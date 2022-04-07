# include <algorithm>
# include <iostream>
# include <vector>

struct ElementNotFoundException : public std::exception {
	const char *what() const throw() {
		return ("Element not found");
	}
};

template <typename T>
typename T::iterator easyfind(T &vec, int n) {
	typename T::iterator it;

	it = std::find(vec.begin(), vec.end(), n);
	if ( it == vec.end() )
		throw ElementNotFoundException();
	std::cout << "Element found" << std::endl;
	return (it);
}
