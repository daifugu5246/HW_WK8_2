#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main() {

	char string[100];
	int l,i=0,temp=0,sum=0;
	scanf("%s", string);
	l = strlen(string);
	while (i < l) {
		if (string[i] >= '0' && string[i]  <= '9') {
			temp = (int)string[i] - 48;
			while (string[i+1] >= '0' && string[i+1] <= '9') {
				temp = (temp * 10) + ((int)string[i + 1]-48);
				i++;
			}
			sum = sum + temp;
			temp = 0;
			i++;
		}
		else {
			i++;
		}
	}
	printf("%d", sum);
	return 0;
}