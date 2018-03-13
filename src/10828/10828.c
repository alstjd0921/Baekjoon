#include <stdio.h>
#include <string.h>

int stack[10000];

int main() {
	int N, i, j, num, pointer=0;
	scanf("%d", &N);

	for(i=0; i<N; i++) {
		char buf[BUFSIZ];
		scanf("%s", buf);
		if(strcmp(buf, "push") == 0) {
			scanf("%d", &num);
			stack[pointer++] = num;
		}
		if(strcmp(buf, "pop") == 0) {
			if(pointer <= 0)
				printf("-1\n");
			else {
				printf("%d\n", stack[--pointer]);
			}
		}
		if(strcmp(buf, "size") == 0) {
			printf("%d\n", pointer);
		}

		if(strcmp(buf, "empty") == 0) {
			if(pointer <= 0){
				printf("1\n");
			}
			else{
				printf("0\n");
			}
		}
		if(strcmp(buf, "top") == 0) {
			if(pointer <= 0){
				printf("-1\n");
			}
			else{
				printf("%d\n", stack[pointer-1]);
			}
		}
	}

	return 0;
}



