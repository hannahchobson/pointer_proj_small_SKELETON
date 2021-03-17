#include <iostream>
#include <stringmanip.h>

const int INVALID_NULL_PTR_DETECTED = -1;
const int SUCCESS = 0;

int amountOfMemoryToAllocateForNewString(int len_src, int numbTagsToReplace, int len_tag, int len_tag_replacement){
	int num_tag_allocate = numbTagsToReplace * len_tag;
	return len_src *num_tag_allocate;
}

int replace(const char *src, const char *new_src, const char *tag, const char *tag_replacement){
	if(src == null || new_src == null || tag == null || tag_replacement == null){
		return INVALID_NULL_PTR_DETECTED;
	}

	new_src = src;
	// how to fix this //



	return SUCCESS;

}

int findNumbOccurrences(const char *src, const char *tag){
	int count = 0;
	for(int i = 0; i < sizeof(src); i++){
		if(*(src + i) == tag[0]){
			count ++;
		}
	}
	return count;
}


