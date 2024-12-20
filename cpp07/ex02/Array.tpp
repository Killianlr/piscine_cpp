#include"Array.hpp"

//	Default constructor (new [0] alloc 0 byte in one block)
template <typename T>
Array<T>::Array() : _array(new T [0]), _size(0) {}

//	Default destructor (new [0] must be deleted)
template <typename T>
Array<T>::~Array() { delete [] _array; }

//	Param constructor
template <typename T>
Array<T>::Array(const unsigned int nb)	// protected against alloc error
{
	try { _array = new T [nb]; _size = nb; }
	catch (std::exception & e) { std::cout << e.what() << std::endl; }
}

//	Copy constructor (via copy operator)
template <typename T>
Array<T>::Array(const Array & src)
{
	try {_size = src.size(); _array = new T [_size]; }
	catch (std::exception & e) { std::cout << e.what() << std::endl; }
	for (unsigned int i = 0; i < _size; ++i)
		this->_array[i] = src._array[i];
}

//	Copy operator
template <typename T>
Array<T> & Array<T>::operator=(const Array & rhs)
{
	delete [] this->_array;
	try {_size = rhs.size(); this->_array = new T [_size]; }
	catch (std::exception & e) { std::cout << e.what() << std::endl; }
	for (unsigned int i = 0; i < _size; ++i)
		this->_array[i] = rhs._array[i];
	return (*this);
}

//	size
template <typename T>
unsigned int Array<T>::size() const { return (_size); }

//	os stream << redefinition
template <typename T>
std::ostream & operator<<(std::ostream& os, const Array<T> &rhs)
{
	return (os << rhs.getSize());
} 

//	operator []
template<typename T>
T &	Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw BadIndex();
	return (_array[index]);
}

//	Exception Bad Index
template<typename T>
const char* Array<T>::BadIndex::what() const throw()
{
	return ("BadIndexEception");
}