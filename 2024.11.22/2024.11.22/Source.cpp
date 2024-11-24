#include <iostream>

void addE(int*& a, int& snum, int anum) {
	int* newa = (int*)malloc((snum + 1) * sizeof(int));
	for (int i = 0; i < snum; ++i) {
		*(newa + i) = *(a + i);
	}
	*(newa + snum) = anum;
	free(a);
	a = newa;
	++snum;
}
void addS(int*& a, int& snum, int anum) {
	int* newa = (int*)malloc((snum + 1) * sizeof(int));
	*(newa+0) = anum;
	for (int i = 0; i < snum; ++i) {
		*(newa + i+1) = *(a + i);
	}
	free(a);
	a = newa;
	++snum;
}
void remE(int*& a, int& snum) {
	if (snum == 0) {
		printf("\nYour array is emprty\n");
		return;
	}
	int* newa = (int*)malloc((snum - 1) * sizeof(int));
	for (int i = 0; i < snum - 1; ++i) {
		*(newa + i) = *(a + i);
	}
	free(a);
	a = newa;
	--snum;
}
void remS(int*& a, int& snum) {
	if (snum == 0) {
		printf("\nYour array is empty\n");
		return;
	}
	int* newa = (int*)malloc((snum - 1) * sizeof(int));
	for (int i = 1; i < snum; ++i) {
		*(newa+i-1) = *(a+i);
	}
	free(a);
	a = newa;
	--snum;
}
void showa(int* a, int snum) {
	if (snum == 0) {
		printf("\nYour array is empty\n");
		return;
	}
	printf("\nYour current array:\n");
	for (int x = 0; x < snum; ++x) {
		printf("%d ", *(a + x));
	}
	printf("\n");
}
void menu() {
	printf("\nMenu\n What do you want to do with your array today? \n 1. Add sth to the end\n 2. Add sth to the start \n 3. Remove sth from the end \n 4. Remove sth from the start \n 5. Show my array \n 6. Exit \n");
}

int main(int argc, char* argv[]) {
	int snum = 0; 
	int c = 0;
	int anum = 0;
	printf("Enter the size of array, then enter the array\n");
	scanf_s("%d\n", &snum);
	int* a = (int*)malloc((snum + 1) * sizeof(int));; 
	for (int i = 0; i < snum; ++i) {
		scanf_s("%d", a + i);
	}
	while (c != 6) {
		menu();
		scanf_s("%d", &c);
		switch (c) {
		case 1:
			printf("\nEnter the final value\n");
			scanf_s("%d", &anum);
			addE(a, snum, anum);
			break;
		case 2:
			printf("\nEnter the initial value\n");
			scanf_s("%d", &anum);
			addS(a, snum, anum);
			break;
		case 3:
			remE(a, snum);
			break;
		case 4:
			remS(a, snum);
			break;
		case 5:
			showa(a, snum);
			break;
		case 6:
			printf("\nGoodbye!");
			break;
		default:
			printf("Wrong option\n");
			break;
		}
	}
	free(a);
	return EXIT_SUCCESS;
}