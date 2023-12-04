#ifndef VectorSearch_H

#define VectorSearch_H 

class VectorSearch
{
	//class used by the user
	private:
		bool isClustered = false;
		bool isCompressed = false;

		CompressedItems CompressedItems;
		OriginalItems originalItems;
}

#endif