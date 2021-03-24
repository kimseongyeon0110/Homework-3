/*
 * struct.c
 *
 *  Created on: 2021. 3. 24.
 *      Author: KimSeongYeon
 */

#include <stdio.h>
#include <string.h>

/*
#define FALSE 0
#define TRUE 1
*/

struct student1 {//구조체 선언
	char lastName; //char형 변수
	int studentId; //int형 변수
	char grade; //char형 변수
};

typedef struct {//typedef형 구조체 선언
	char lastName;
	int studentId;
	char grade;
}student2;

int main(){

	printf("[----- [김성연] [2020039003] -----]\n\n");

	struct student1 st1 = {'A', 100, 'A'}; //구조체에 값 대입

	printf("st1.lastName = %c\n", st1.lastName);
	printf("st1.studentId = %d\n", st1.studentId);
	printf("st1.grade = %c\n", st1.grade);

	student2 st2 = { 'B', 200, 'B' }; //student1과는 다르게 typedef를 썼기에 따로 struct 타입을 적지 않아도 된다. 값 대입
	printf("st2.lastName = %c\n", st2.lastName); //st2의 lastname값 출력
	printf("st2.studentId = %d\n", st2.studentId);
	printf("st2.grade = %c\n", st2.grade);

	student2 st3; //구조체 student2 st3 선언

	st3 = st2; //st2 값을 st3으로 구조 치환

	printf("\nst3.lastName = %c\n", st3.lastName);//st2의 값과 같은 값이 나온다.
	printf("st3.studentId = %d\n", st3.studentId);
	printf("st3.grade = %c\n", st3.grade);


		/*if (strcmp(st3.lastName, st2.lastName))//전체 구조의 동등성 검사는 불가능 하므로 각각의 구조를 비교해야함
			return FALSE;
		if (st3.studentId != st2.studentId)
			return FALSE;
		if (strcmp(st3.grade, st2.grade))
			return FALSE;
		return TRUE;
*/

	return 0;

}
