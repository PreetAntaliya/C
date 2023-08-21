#include <stdio.h>

void main() {

	char a[50];
	int i,vow=0,con=0;
	printf("Enter Any Sentence : ");
	gets(a);
	
	for(i=0;i<a[i]!='\0';i++){
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
			vow++;
		} else {
			con++;
		}
	}
	
	printf("\nThe Total Number Of Vowel Is: %d\n", vow);
	printf("The Total Number Of Consonant  Is: %d", con);

}

