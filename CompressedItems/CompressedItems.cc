// CompressedItems.cc

#include "CompressedItems.ih"

CompressedItems::CompressedItems(const std::vector<std::vector<double>> data, const std::vector<double> medians)
{
	for(size_t idx = 0; idx != data.size(); ++idx) 
	{
		addItem(data[idx], medians);
	}
}