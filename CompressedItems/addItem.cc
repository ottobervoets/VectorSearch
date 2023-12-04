#include "CompressedItems.ih"

void CompressedItems::addItem(const vector<double> item,const vector<double> medians)
{
	//make binary
	boost::dynamic_bitset<> binaries;
	for(size_t idx = 0; idx != item.size(); ++idx) {
		binaries.push_back(item.at(idx) >= medians.at(idx)? 1 : 0); 
	}
	//make compressed item
	CompressedItem compressedItem(binaries, 0, &item);

	//add it to data
	data.push_back(compressedItem);
}