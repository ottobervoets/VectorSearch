#include <iostream>
#include <vector>
#include "OriginalItems/OriginalItems.h"

using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    vector<vector<double>> inputs (0, vector<double>(4));
    inputs.push_back(vector<double>{1,2,3,4});
    inputs.push_back(vector<double>{5,6,7,8});
    inputs.push_back(vector<double>{9,10,11,12});

    OriginalItems originalItems(inputs);

    originalItems.testprint(2,3);

    std::cout << "Good Bye!\n";

}
