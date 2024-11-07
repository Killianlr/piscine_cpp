#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
	public :
		Span();
		Span(const unsigned int n);
		~Span();
		Span(Span &cp);

		Span& operator=(Span& eq);

		void	displayVec() const;

		void	addNumber(const unsigned int& nb);
		int		longestSpan() const;
		int		shortestSpan();

		template <typename Iterator>
		void	addNumber(Iterator begin, Iterator end)
		{
			while (begin != end)
			{
				if (_vec_n.size() < _n)
					_vec_n.push_back(*begin);
				else
					throw OutOfRange();
				++begin;
			}
		}

		class	OutOfRange : public std::exception {
			public:
				OutOfRange();
		};

		class	NotEnoughtNbr : public std::exception {
			public:
				NotEnoughtNbr();
		};

	private:
		const unsigned int _n;
		std::vector<int> _vec_n;
};

#endif
