#ifndef COMPRESSEDITEMS_H

#define COMPRESSEDITEMS_H 

#include "../CompressedItem/CompressedItem.h"
#include <vector>

class CompressedItems 
{
    private:
        std::vector<CompressedItem> data;
    public:
        CompressedItems(const std::vector<std::vector<double>> data, const std::vector<double> medians);
        void addItem(const std::vector<double> item,const std::vector<double> medians);

        void printCompressedItems();
};

#endif