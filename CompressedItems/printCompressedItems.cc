// printCompressedItems.cc

#include "CompressedItems.ih"

void CompressedItems::printCompressedItems()
{
	for(size_t idx = 0; idx != data.size(); ++idx) {
		data.at(idx).print();
	}
}