#include <stdio.h>
#include <math.h>
#include <string.h>

//Ex.1

int biggetSeq () {

	int num;

	scanf("Input the numbers:\n%d",&num);

	int biggest = num;

	while(num!=0) {

		scanf("%d", &num);

		if(biggest < num) {
			biggest = num;
		}
	}

	return biggest;

}

//Ex.2

int findAvg () {

	int num;

	scanf("Input the numbers:\n%d", &num);

	int num_sum = num;
	int count = -1;

	while(num!=0) {

		scanf("%d", &num);
		num_sum += num;
		count++;

	}

	return (num_sum / count);

}

//Ex.3

int sndSeq () {

	int num;

	scanf("Input the numbers:\n%d" , &num);

	int big = num;
	int snd = num;

	while(num!=0) {

		scanf("%d", &num);
		if(num > big) {
			snd = big;
			big = num;
		}

		if(num < big && num > snd) {
			snd = num;
		}

	}

	return snd;

}

//Ex.4

int bitsUm (unsigned int n) {

	int count = 0;

    while(n>0) {
        
        if(n%2 != 0) {
		    count++;
		    n = n/2;
	}
	
	    else {
	        n = n/2;
	    }
	    
    }

	return count;
	
}

//Ex.5

int trailingZ (unsigned int n) {

	int count = 0;
	
	while(n>0) {
	    if(n%2 == 0) {
	        count++;
	        n = n/2;
	    }
	    
	    else {
	        n = n/2;
	    }
	}
	
	return count;
	
}

//Ex.6

int qDig (unsigned int n) {

	int digits = 1;

    n/=10;
    
	while(n > 0) {
		n/=10;
		digits++;
	}

	return digits;

}

//Ex.7

char *mystrcat (char s1[], char s2[]) {
 
	int i;
	int j = strlen(s1);

	for(i=0; s2[i] != '\0'; i++) {
		s1[j] = s2[i];
		j++;
	}

	s1[j] = '\0';

    return s1;
}

//Ex.8

char *mystrcpy(char s1[], const char s2[]) {

	int i;

	for(i = 0; s2[i] != '\0'; i++) {
		s1[i] = s2[i];
	}

	s1[i] = '\0';

    return s1;

}

//Ex.9

int mystrcmp(char s1[], char s2[]) {

    int i = 0;

	while(s1[i] == s2[i]) {

	    if(s1[i] == '\0') {
	        return 0;
	    }
	    i++;
	}

    return (s1[i] < s2[i] ? -1 : +1);

}

//Ex.11

void strrev (char s[]) {
    
    int size = strlen(s)-1;
    int i;
    char temp;
    
    for(i=0;i<=size/2;i++) {
        temp = s[i];
        s[i] = s[size-i];
        s[size-i] = temp;
    }

}