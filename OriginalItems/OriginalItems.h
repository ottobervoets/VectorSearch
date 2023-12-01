#ifndef ORIGINALITEMS_HH

#define ORIGINALITEMS_HH

#include <iostream>
#include <vector>

class OriginalItems
{
    private:
            std::vector<std::vector<double>> data;
            std::vector<double> medians;

            void setMedians();
    public:
        OriginalItems();
        OriginalItems(std::vector<std::vector<double>> data);

        void build();

        void testprint(int loca, int locb);
        void printMedians();

};

#endif