#include "OriginalItems.ih"

OriginalItems::OriginalItems(std::vector<std::vector<double>> data)
	:
		data(std::vector<std::vector<double>>(data)),
		medians(std::vector<double>(data[0].size(), 0))
{}



