#ifndef VectorSearch_H

#define VectorSearch_H 

#include "OriginalItems/OriginalItems.h"
#include "CompressedItems/CompressedItems.h"


class VectorSearch
{
	//class used by the user
	private:
		bool isClustered = false;
		bool isCompressed = false;
		bool mediansUpToData = false;

		CompressedItems CompressedItems;
		OriginalItems originalItems;
}

#endif