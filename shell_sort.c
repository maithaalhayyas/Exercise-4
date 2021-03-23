void shift_element_by_gap(unsigned int i,unsigned int gap){
	int ivalue;
	unsigned int j;
	for(j=i;ivalue = arr[i];j>=gap && arr[j-gap]>ivalue ;j-=gap){
		arr[j]=arr[j-gap];//move
		arr[j]=ivalue;//insert element
	}
}

void shell_sort(void){

	unsigned int gap,i,len = array_length(arr);
    // compare against farther away elements first,then closer elements
	for(gap = len/2;gap>0;gap/=2){
		//comparing and shifting elements in multiples of gap
		for(i=gap;i<len;i++){
			shift_element_by_gap(i,gap);//if out order, do shift
		}
	}

}