#include "Span.hpp"


int	main(void) {
	Span	span(5);
	
	try {
		// span.addNumber(11);
		// // span.addNumber(1);
		// // span.addNumber(8);
		// // span.addNumber(18);
		// // span.addNumber(24);
		// // span.addNumber(24);
		std::cout << span.shortestSpan() << std::endl;
	} catch (std::exception &e) {
		return (1);
	}
	return (0);
}