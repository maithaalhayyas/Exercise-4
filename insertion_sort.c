#include <stdio.h>
#include<stdlib.h>

void shift_element(int *pElement){
    
	// initializing index position to ivalue dereferencing the pointer
	int ivalue = *pElement;
	for (ivalue = *pElement;pElement>arr && *(pElement −1)>ivalue;pElement−−){
		*pElement = *(pElement-1);
		*pElement = ivalue;
	}
}


int array_length(int *arr){

	return sizeof(arr)/sizeof(arr[0]);
}

void insertion_sort(void){

	int *pElement,*pEnd = arr + array_length(arr);
	for(pElement = arr+1;pElement<pEnd;pElement++){
		if(*pElement<*(pElement-1)){

			// calling shift_element function
			shift_element(pElement);
		}
	}
}

int main(){

	int *arr;
	int n,z,position;
	printf("Enter the size of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
    arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<5;i++) {
        scanf("%d ",(arr+i));
    }

	//calling insertion sort function

	insertion_sort();

	

}