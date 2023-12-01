// setMedians.cc

#include "OriginalItems.ih"

void OriginalItems::setMedians()
{
	vector<double> temp((int) data[0].size, 0);
	for(int column = 0; column != (int) data[0].size(); column++)
	{
		for(int row = 0; row != (int) data.size(); row++)
		{
			temp[row] = data[row][column];

		}
		//sort 
		auto m = temp.begin() + temp.size() / 2;
    	std::nth_element(temp.begin(), m, temp.end());
    	medians[column] = temp[temp.size() / 2];
	}
	
}