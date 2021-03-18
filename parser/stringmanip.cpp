#include <iostream>
#include <stringmanip.h>

const int INVALID_NULL_PTR_DETECTED = -1;
const int SUCCESS = 0;

int amountOfMemoryToAllocateForNewString(int len_src, int numbTagsToReplace, int len_tag, int len_tag_replacement){
	int num_tag_allocate = numbTagsToReplace * len_tag;
	return len_src *num_tag_allocate;
}

int replace(const char *src, const char *new_src, const char *tag, const char *tag_replacement){
	if(src == NULL || new_src == NULL || tag == NULL || tag_replacement == NULL){
		return INVALID_NULL_PTR_DETECTED;
	}

	new_src = src;
	for(int i = 0; i < sizeof(src); i++){

		if(*(src + i) == tag[0]){
			if(strncmp((src + i), tag, sizeof(tag)) == 0){
				new_src = (src + i) + tag_replacement;
			}
		}

	}



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


