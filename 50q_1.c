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

//Ex.10


char *mystrstr(char s1[], char s2[]) {
    
    char *aux = NULL;
    int i,p;
    
    if (s2[0] == '\0') return s1;
    
    for(i = 0; s1[i] != '\0' && aux == NULL; i++) {
        
        for(p = 0; s2[p] != '\0' && s2[p] == s1[i+p];p++);
        
        if (s2[p] == '\0')
            aux = s1 + i;
    }
    return aux;
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

//Ex.12

void strnoV (char t[]) {

    int len = strlen(t);
    int i,j;

    for (i = 0; i < len; i++) {
        
        if (t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u' ||
            t[i] == 'A' || t[i] == 'E' || t[i] == 'I' || t[i] == 'O' || t[i] == 'U') {

            for (j = i; j < len; j++) {

                t[j] = t[j + 1];
            }
            i--;
            len--;
        }
        t[len + 1] = '\0';
    }
}


//Ex.21

int contaVogais (char s[]) {

	int i;
	int vow_count = 0;

	for(i = 0; i < strlen(s); i++) {

		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
			vow_count++;
		}
	}

    return vow_count;
}

//Ex.23

int palindroma (char s[]) {

	int i,j;

	for(i = 0; i < strlen(s); i++) {
		for(j = (strlen(s)-1)-i; j != i; j--) {
			if(s[i] != s[j]) {
				return 1;
			}
		}
	}

    return 0;
}

//Ex.26

void insere (int s[], int N, int x) {
    
    int i,p;
    
    for(i = 0; i < N; i++) {
        if(x < s[i]) {
            p = i;
            break;
        }
        else {
            p = i+1;
        }
    }
    for(i = N+1; i >= p; i--) {
        s[i] = s[i-1];
    }
    s[p] = x;
}



