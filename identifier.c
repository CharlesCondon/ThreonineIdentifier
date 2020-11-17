//Author: Charles Condon

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void checkSeq(char input[], int size);

int main() {

	char dna[10000];

	//char * threons[4] = {"ACT", "ACC", "ACA", "ACG"};

	printf("Enter the DNA sequecen: ");
	//read up to 9999 characters
	scanf("%9999s", dna);

	// test sequence: ATGACACGGAGTACGTAA
	int size = strlen(dna);
	checkSeq(dna, size);

	return 0;

}
/* Searches a given DNA sequence for validity and determine the locations of triples encoding Threonine 
 * Parameters:
 *  dna sequence given by user, size of the dna string 
 * Return Value: 
 *  location of triple if found, -1 if invalid string, -2 if valid but no triples found
 */
void checkSeq(char input[], int size) {
	int found = 0;
	
	// iterate through array while conditions for sequence are met
	for (int i = 0; i < size; i++) {

		if ((input[i] == 'T' || input[i] == 'C' || input[i] == 'G' || input[i] == 'A') && input[i] != "\0") {
			// only check each triple
			if (i == 0 || i % 3 == 0){
				
				if (input[i] == 'A') {
					
					if (input[(i+1)] == 'C') {
						
						if (input[(i+2)] == 'T' || input[(i+2)] == 'C' || input[(i+2)] == 'G' || input[(i+2)] == 'A') {
							//printf("The locations of the triples encoding Threonine are:%d (%c%c%c)", i, dna[i], dna[i+1], dna[i+2]);
							printf("%d\n", i);
							found = 1;
						}
					}
				}
			}
		}
		// if an invalid character is found then exit and return -1
		else {
			printf("%d\n", -1);
			exit(0);
		}
	}
	// if no invalid characters are found and no triples are found by the end then return -2
	if (found != 1) {
		printf("%d\n", -2);
		exit(0);
	}
}
