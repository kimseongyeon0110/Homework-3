
 /** p2-2.c
 *
 *  Created on: 2021. 3. 24.
 *      Author: KimSeongYeon
*/

#include<stdio.h>

void print1(int* ptr, int rows);

int main() {

	printf("[----- [김성연] [2020039003] -----]\n\n");

	int one[] = { 0, 1, 2, 3, 4 }; //배열에 값 대입

	printf("one     = %p\n", one); //one의 값 출력, 배열이름은 주소이다
	printf("&one    = %p\n", &one); //one의 주소 출력
	printf("&one[0] = %p\n", &one[0]); //one의 0번째 주소 출력
	printf("\n");

	print1(&one[0], 5);//함수호출

	return 0;
}

void print1(int* ptr, int rows)//ptr에 one의 시작주소가 담김
{

	int i;
	printf("Address \t Contents\n");
	for (i = 0; i < rows; i++)
		printf("%p \t %5d\n", ptr + i, *(ptr + i));//int형 크기인 4바이트만큼 주소가 이동하며, 해당하는 배열 주소안에 담겨있는 값이 출력됨
	printf("\n");
}

