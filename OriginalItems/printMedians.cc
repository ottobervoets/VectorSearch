// printMedians.cc

#include "OriginalItems.ih"

void OriginalItems::printMedians() {
	copy(medians.begin(),
         medians.end(),
         std::ostream_iterator<int>(std::cout, " "));
}