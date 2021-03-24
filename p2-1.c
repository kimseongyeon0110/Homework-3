/*

 * p2-1.c
 *
 *  Created on: 2021. 3. 24.
 *      Author: KimSeongYeon

*/

#include<stdio.h>

#define MAX_SIZE 100 //MAX_SIZE값 100 정의

float sum(float list[], int); //함수원형
float input[MAX_SIZE], answer; //float형 배열과 변수 선언
int i; //int형 변수 i 선언

void main(void){

	printf("[----- [김성연] [2020039003] -----]\n\n");

	for (i = 0; i < MAX_SIZE; i++) //MAX_SIZE번 i++하며 반복
		input[i] = i;//배열에 i값 대입

	printf("address of input = %p\n", input); //input 배열이름은 주소를 나타낸다

	answer = sum(input, MAX_SIZE);//input과 MAX_SIZE를 넣어 배열의 총합을 구한 sum값을 answer에 대입
	printf("The sum is : %f\n", answer);
}

float sum(float list[], int n){//input의 주소를 list가 담음, n은 MAX_SIZE 즉 100을 담음

	printf("value of list = %p\n", list); //input의 주소를 담았기에 input 주소와 같은 값이 출력
	printf("address of list = %p\n\n", &list); //list의 주소 출력

	int i;
	float tempsum = 0;
	for (i = 0; i < n; i++) //n번 반복
		tempsum += list[i]; //배열의 총합
	return tempsum;
}
