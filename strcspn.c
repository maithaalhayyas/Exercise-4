//The function strcspn computes the index of the first deleimeter charecter in a string

#include <stdio.h>
unsigned int strspn(const char* str, const char* delims){
	unsigned int i;
	for(int i = 0;str[i]!='\0' && strpos(delims,str[i])==1;i++){
	}

	return i;
}
