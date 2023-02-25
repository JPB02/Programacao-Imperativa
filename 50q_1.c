#include <stdio.h>
#include <string.h>

//EX.1

int maior() {

	int x;
	scanf("%d", &x);
	int m = x;

	while(x!=0) {
		scanf("%d", &x);
		if(x>m) {
			m = x;
		}
	}
	printf("O maior elemento é: %d\n", m);
	return m;
}

//EX.2

int media() {

	int x;
	scanf("%d", &x);
	int media = x;
	int count = 1;

	while(x!=0) {
		scanf("%d", &x);
		media+= x;
		count++;
	}
	int res = (media/count);
	printf("A média dos elementos é: %d\n", res);
	return res;
}

//EX.3

int maior_2() {

	int x;
	scanf("%d", &x);
	int fst = x;
	int snd = x;
	int tmp;

	while(x!=0) {
		scanf("%d", &x);
		if(x>fst) {
			tmp = fst;
			fst = x;
			snd = tmp;
		}
		if(x<fst && x>snd) {
			snd = x;
		}
	}
	printf("O segundo maior elemento é: %d\n", snd);
	return snd;
}

//EX.4

int bitsUm(unsigned int n) {

	int count = 0;

	while(n>0) {
		if(n%2 != 0) {
			count++;
			n/=2;
		}
	    else {
	        n/=2;
	    }
	}
	return count;
}

//EX.5

int trailingZ(unsigned int n) {

	int count = 0;

	while(n>0) {
		if(n%2 == 0) {
			count++;
			n/=2;
		}
	    else {
	        n/=2;
	    }
	}
	return count;
}

//EX.6

int qDig(unsigned int n) {

	char str[1024];
	sprintf(str, "%d", n);

	return strlen(str);
}

//EX.7

char mystrcat(char s1[], char s2[]) {

	int i = strlen(s1);
	int j;

	for(j=0; s2[j]!='\0'; j++,i++) {
		s1[i] = s2[j];
	}
	s1[i] = '\0';
	return s1;
}
