#include <stdio.h>

void main(){	
	int i, first = -1;
    int arr[] = { 1, 2, 3, 6, 2 };
    int n = sizeof(arr) / sizeof(int);
    int x = 6;
    for (i = 0; i < n; i++) {
        if (x != arr[i]){
            continue;
    	}
        if (x == arr[i]){
        	first = i;
        	break;
    	}	
    }
    printf("%d",first);
}