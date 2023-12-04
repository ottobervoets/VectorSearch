// print.cc

#include "CompressedItem.ih"

void CompressedItem::print()
{
	for(size_t idx = 0; idx != data.size(); ++idx)
	{
		cout << data[idx];
	}
	cout << '\n';
}