 /*
* padding.c
 *
 *  Created on: 2021. 3. 24.
 *      Author: KimSeongYeon
*/


#include <stdio.h>

struct student {
	char lastName[13]; //13바이트
	int studentId; //4바이트
	short grade; //2바이트
}; //구조체는 총 19바이트가 된다

int main() {

	printf("[----- [김성연] [2020039003] -----]\n\n");

	struct student pst;

	printf("size of student = %ld\n", sizeof(struct student));//padding된 구조체 student의 크기 출력
	//16바이트+4바이트+4바이트 24바이트 출력
	printf("size of int = %ld\n", sizeof(int)); //int형 크기 출력
	printf("size of short = %ld\n", sizeof(short)); //short형 크기 출력

	return 0;
}
