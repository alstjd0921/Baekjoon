#include <stdio.h>

int main(int argc, const char *argv[]) {
	int i, j, tmp, temp;
	char arr[3];
	
	for (i = 0; i < 3; ++i) {
		tmp = 0;
		for (j = 0; j < 4; ++j) {
			scanf("%d", &temp);
			if (temp == 0) {
				tmp++;
			}
		}
		switch(tmp) {
			case 1:
				arr[i] = 'A';
				break;
			case 2:
				arr[i] = 'B';
				break;
			case 3:
				arr[i] = 'C';
				break;
			case 4:
				arr[i] = 'D';
				break;
			default:
				arr[i] = 'E';
				break;
		}
	}
	
	for (i = 0; i < 3; ++i) {
		printf("%c\n", arr[i]);
	}
	
	return 0;
}