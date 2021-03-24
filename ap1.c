/*
 * ap1.c
 *
 *  Created on: 2021. 3. 24.
 *      Author: KimSeongYeon*/




#include <stdio.h>
#include <stdlib.h>

void main() {

	printf("[----- [김성연] [2020039003] -----]\n\n");

	int list[5]; //5개의 정수를 저장할 수 있는 배열
	int* plist[5] = { NULL, }; //int 형 포인터가 5개 들어가는 배열 그리고 초기화

	plist[0] = (int*)malloc(sizeof(int));//plist[0]에 int형 크기를 동적할당

	list[0] = 1; //list[0] 값에 1 대입
	list[1] = 100;  //list[1] 값에 100대입

	*plist[0] = 200; //plist[0]가 가리키는 값에 200대입

	printf("value of list[0] = %d\n", list[0]); //list[0]값인 1 출력
	printf("address of list[0]      = %p\n", &list[0]); //list[0]의 주소 출력
	printf("value of list           = %p\n", list); //list는 list[0]를 가리키는 포인터이므로 list[0]의 주소값과 같게 나온다
	printf("address of list (&list) = %p\n", &list); //list의 주소를 출력
	//list 이름 자체가 주소이고, list값, list의 주소가 다 동일하다


	printf("----------------------------------------\n\n");
	printf("value of list[1]   = %d\n", list[1]); //list[1]값인 100 출력
	printf("address of list[1] = %p\n", &list[1]); //list[1]값의 주소 출력
	printf("value of *(list+1) = %d\n", *(list + 1)); // list[1]과 같은 값으로 나온다
	printf("address of list+1  = %p\n", list + 1); //list가 int형 이므로 list[0] 주소값에서 4만큼 더 이동한 값이 나온다
	//*(list+1)에서 더할수록 자료형 크기만큼 주소가 더 이동한다. *(list+1)속 list+1는 list[1]의 주소와 동일하기에 값이 동일하게 나온다

	printf("----------------------------------------\n\n");

	printf("value of *plist[0] = %d\n", *plist[0]); //주소를 담고 있는 plist[0]에 위치한 값을 출력
	printf("&plist[0]          = %p\n", &plist[0]); //plist[0]의 주소를 출력
	printf("&plist             = %p\n", &plist); //plist는 plist[0]과 같기에 위와 같은 값을 출력
	printf("plist              = %p\n", plist); // plist의 시작주소, plist[0]의 주소와 같다
	printf("plist[0]           = %p\n", plist[0]); //plist[0]의 값 출력, plist[0]이 가리키는 값의 주소와 같음
	printf("plist[1]           = %p\n", plist[1]); //NULL 로 세팅이 되어있기 때문에, 주소가 0으로 나온다.
	printf("plist[2]           = %p\n", plist[2]);
	printf("plist[3]           = %p\n", plist[3]);
	printf("plist[4]           = %p\n", plist[4]);


	free(plist[0]); //메모리 해제

}

