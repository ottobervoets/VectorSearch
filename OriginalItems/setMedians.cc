// setMedians.cc

#include "OriginalItems.ih"

void OriginalItems::setMedians()
{
	std::vector<double> temp( (int) data.size());
	for(int column = 0; column != (int) data[0].size(); column++)
	{
		for(int row = 0; row != (int) data.size(); row++)
		{
			temp.at(row) = data[row][column];

		}
		// get middel element 
		auto m = temp.begin() + temp.size() / 2;
    	std::nth_element(temp.begin(), m, temp.end());
    	medians.at(column) = *m;
    	std::cerr << medians[column] << "-\n";


	}
	
}