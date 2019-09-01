#ifndef __BUBBLE_SORT
#define __BUBBLE_SORT
#endif

int bubbleSort (int arr[], int length) {	//gets the original array and length of the array (minus 2) from main program

int i = 0, temp = 0;	//i is a counting variable for 'for' loops. temp is a temporary variable for switching two array elements

	for (i = 0; i <= length; i++) {		//while i is within bounds of the array
		if (arr[i] > arr[i+1]) {		//check to see if the first position is greater than the second. If it is, then switch the two variables.
			temp = arr[i];				//save the first element as a temp value
			arr[i] = arr[i + 1];		//set the first value = to the second
			arr[i + 1] = temp;			//set the second value to the temp value (or the first value's original value
		}
	}
	
	return arr[length];		//send the array back
}

