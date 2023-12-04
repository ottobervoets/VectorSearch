#ifndef COMPRESSEDITEM_H

#define COMPRESSEDITEM_H 

#include <boost/dynamic_bitset.hpp>
#include <vector>

class CompressedItem
{
	private:
		size_t classLable;
		boost::dynamic_bitset<> data;
		const std::vector<double> *originalData;

	public:
		CompressedItem(boost::dynamic_bitset<> data, size_t lable, const std::vector<double> *originalData);

		inline const size_t &getClass();
		inline const boost::dynamic_bitset<> &getBitset();
		inline const std::vector<double> &getOriginalData();

		void print();


};

inline const size_t &CompressedItem::getClass() 
{
	return classLable;
}

inline const boost::dynamic_bitset<> &CompressedItem::getBitset() 
{
	return data;
}

inline const std::vector<double> &CompressedItem::getOriginalData()
{
	return *originalData;
}



#endif