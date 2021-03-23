//Assignment 4.1 (a)

//Re implementing shift element by using pointers and pointers arithmetic insted of array indexing

// we know that arr[i]=*(arr+i) where arr is the address of first block element in the array

// we have to use the formula to do the solution

void shift_element(int *pElement){
    
	// initializing index position to ivalue dereferencing the pointer
	int ivalue = *pElement;
	for (ivalue = *pElement;pElement>arr && *(pElement −1)>ivalue;pElement−−){
		*pElement = *(pElement-1);
		*pElement = ivalue;
	}
}


