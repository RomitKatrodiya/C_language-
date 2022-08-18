#include<stdio.h>

int main() {
	int num;
	FILE *fp;
	
	fp = fopen("data.txt", "r");
	
	fscanf(fp, "%d", &num);
	
	printf(" %d", num);
		
	fclose(fp);
	
	return 0;
}

