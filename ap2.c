/*

 * ap2.c
 *
 *  Created on: 2021. 3. 24.
 *      Author: KimSeongYeon
*/


#include <stdio.h>
#include <stdlib.h>

void main() {

	printf("[----- [김성연] [2020039003] -----]\n\n");

	int list[5]; //5개의 정수를 저장할 수 있는 배열
	int* plist[5]; //int 형 포인터가 5개 들어가는 배열

	list[0] = 10;
	list[1] = 11;


	plist[0] = (int*)malloc(sizeof(int)); //plist[0]에 int형 크기로 동적할당

	printf("list[0] \t= %d\n", list[0]); //list의 값 출력
	printf("address of list \t= %p\n", list); //배열에선 이름이 주소이므로 list의 주소 출력
	printf("address of list[0] \t= %p\n", &list[0]); //list의 주소 출력
	printf("address of list+0  \t= %p\n", list + 0); //int형의 크기만큼 이동하는 주소, 시작주소 출력, list[0]의 주소와 같음
	printf("address of list+1  \t= %p\n", list + 1); //list[0]에서 int형 크기 4만큼 더한 주소 출력
	printf("address of list+2  \t= %p\n", list + 2); //int형 크기 4만큼 2번 더한 주소 출력
	printf("address of list+3  \t= %p\n", list + 3); //int형 크기 4만큼 3번 더한 주소 출력
	printf("address of list+4  \t= %p\n", list + 4); //int형 크기 4만큼 4번 더한 주소 출력
	printf("address of list[4] \t= %p\n", &list[4]); //배열 4번째 주소 출력, list+4의 주소값과 같음

	free(plist[0]);//메모리 해제
}
