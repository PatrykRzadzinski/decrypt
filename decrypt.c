#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

// code is changing, replace with curl
// example: curl https://www.gambitresearch.com/quiz/ 2>&1| tail -3 | head -1 | tr -s ' ' ','
int code[] = {50,19,171,86,29,107,10,241,174,88,21,177,75,34,180,86,15,179,83,29,173,93,206,165,89,32,95,93,29,171,96,23,173,81,206,179,82,19,95,49,15,172,76,23,179,10,17,167,75,26,171,79,28,166,79,220,95,58,26,164,75,33,164,10,33,164,88,18,95,99,29,180,92,206,178,89,26,180,94,23,174,88,206,160,88,18,95,45,4,95,94,29,95,83,17,160,88,17,174,78,19,127,81,15,172,76,23,179,92,19,178,79,15,177,77,22,109,77,29,172,10,31,180,89,34,168,88,21,95,92,19,165,79,32,164,88,17,164,36,206,160,33,18,113,28,226,160,76,231,115,24};

int i,a,b,c;
char decoded[151];

// brute attempt
for (a=1;a<255;a++) {
	for (b=1;b<255;b++) {
		for (c=1;c<255;c++) {
			for(i=0;i<151;i++) {
				decoded[i] = code[i];
				switch (i%3) {
					case 0:
					decoded[i] -= a;
					break;
					case 1:
					decoded[i] -= b;
					break;
					case 2:
					decoded[i] -= c;
					break;
				}
			}
			// there must be an email address in the string
			if (strstr(decoded,"@gambit") != NULL) {
				printf("%s\n",decoded);
				printf("A: %i, B: %i, C: %i\n",a,b,c);
			}
		}
	}
}

}
