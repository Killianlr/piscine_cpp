#include "Span.hpp"
#include <exception>

Span::Span() : _vec_n(), _n(0){
	// Default constructor
}

Span::Span(const unsigned int n) : _vec_n(), _n(n){

}

Span::~Span() {
	// Default destructor
}

Span::Span(Span &cp) : _vec_n(), _n(cp._n){

}

Span&	Span::operator=(Span &eq) {
	return *this;
}

Span::OutOfRange::OutOfRange() {
	std::cout << "Out of range" << std::endl;
}

Span::NotEnoughtNbr::NotEnoughtNbr() {
	std::cout << "Can't find distance between less than 2 numbers" << std::endl;
}

void	Span::displayVec() const {
	for (std::vector<int>::const_iterator it = _vec_n.begin(); it < _vec_n.end(); ++it)
		std::cout << *it << std::endl;
}

void	Span::addNumber(const unsigned int& nb) {
	if (_vec_n.size() >= _n)
		throw Span::OutOfRange();
	_vec_n.push_back(nb);
}

int		Span::longestSpan() const {
	if (_vec_n.size() < 2)
		throw Span::NotEnoughtNbr();
	int min = *std::min_element(_vec_n.begin(), _vec_n.end());
	int max = *std::max_element(_vec_n.begin(), _vec_n.end());
	return (max - min);
}

int		Span::shortestSpan() {
	if (_vec_n.size() < 2)
		throw Span::NotEnoughtNbr();
	int delta = __INT_MAX__;
	int	res	= 0;
	std::vector<int>::iterator itFixe = _vec_n.begin();
	std::vector<int>::iterator itMove;;

	while (itFixe != _vec_n.end())
	{
		itMove = itFixe + 1;
		while (itMove != _vec_n.end())
		{
			if (*itFixe > *itMove)
				res = *itFixe - *itMove;
			else
				res = *itMove - *itFixe;
			if (delta > res)
				delta = res;
			itMove++;
		}
		itFixe++;
	}
	return (delta);
}