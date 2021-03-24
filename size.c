/*
 * size.c
 *
 *  Created on: 2021. 3. 24.
 *      Author: KimSeongYeon
 */

#include <stdio.h>
#include <stdlib.h>

void main() {

	printf("[----- [김성연] [2020039003] -----]\n\n");

	int** x; //이중포인터 x 선언

	printf("sizeof(x) = %lu\n", sizeof(x)); //32비트 머신이므로 주소를 저장하는 크기가 4가 나온다
	printf("sizeof(*x) = %lu\n", sizeof(*x)); //*x도 주소를 나타내며 위와 같은 이유로 4가 나온다
	printf("sizeof(**x) = %lu\n", sizeof(**x)); //**x 값은 int형을 저장하기 때문에, 4가 나온다.
}
