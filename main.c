#include <stdio.h>  
#include <stdlib.h>
#define SIZE 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void bubbleSort(const int *const array,unsigned int size );/*prtotype*/ 

int main(void) {
	/*initalize array a*/
	int a[SIZE]={36,27,18,6,79,40,81,70,17,43};
	
	unsigned int i; /*counter*/
	
	puts(" Data items in original order");
	/*loop through array a*/
		for(i=0;i<SIZE;++i){
			printf("%4d ",a[i]);
		} /*end for*/
		
		bubbleSort(a, SIZE);
		
		puts("\n Data items in ascending order");
		
		/*loop through array a*/
		for(i=0;i<SIZE;++i){
			printf("%4d ",a[i]);
	    }/*end for*/
		
		puts("");
	}/*end main*/ 

