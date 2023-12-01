// printMedians.cc

#include "OriginalItems.ih"

void OriginalItems::printMedians() {
	copy(medians.begin(),
         medians.end(),
         ostream_iterator<int>(cout, " "));
}