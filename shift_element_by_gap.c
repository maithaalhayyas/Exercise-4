//4.3(a)
// shift element by gap for shell short
void shift_element_by_gap(unsigned int i,unsigned int gap){
	int ivalue;
	unsigned int j;
	for(j=i;ivalue = arr[i];j>=gap && arr[j-gap]>ivalue ;j-=gap){
		arr[j]=arr[j-gap];//move
		arr[j]=ivalue;//insert element
	}
}