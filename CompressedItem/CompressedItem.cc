// CompressedItem.cc

#include "CompressedItem.ih"

CompressedItem::CompressedItem(boost::dynamic_bitset<> data, size_t lable, const vector<double> *originalData)
:
	classLable(lable),
	data(data),
	originalData(originalData)
{}