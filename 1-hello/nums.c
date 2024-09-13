//chap1/nums.c
#include <stdio.h>
#include <limits.h> //최댓값/ 최솟값 볼때
int main(void) {
	//char
	char ch = 'A';
	printf("char:\n");
	printf("Value: %c\n", ch);
	printf("Max: %d\n", CHAR_MAX); //limitd의 상수 사용
	printf("Min: %d\n", CHAR_MIN);


	//signed short int 
	signed short int sshort= 1234;
	printf("\nsigned short int:\n");
	printf("Value: %d\n", sshort);
	printf("Max: %d\n", SHRT_MAX); //limitd의 상수 사용
	printf("Min: %d\n", SHRT_MIN);


	//unsigned short int 
	unsigned short int ushort = 1234U;  //unsigned 때문에 숫자 뒤에 U필요
	printf("\nunsigned short int:\n");
	printf("Value: %u\n", ushort);
	printf("Max: %u\n", USHRT_MAX); //limitd의 상수 사용

	//printf("Min: %d\n", USHRT_MIN); 0이므로 필요없음.


	//signed int 
	signed int sint = 12345;
	printf("\nsigned int:\n");
	printf("Value: %d\n", sint);
	printf("Max: %d\n", INT_MAX); //limitd의 상수 사용
	printf("Min: %d\n", INT_MIN);


	//unsigned int 
	unsigned int uint = 12345U;  //unsigned 때문에 숫자 뒤에 U필요
	printf("\nunsigned int:\n");
	printf("Value: %u\n", uint);
	printf("Max: %u\n", UINT_MAX); //limitd의 상수 사용


	//signed long int 
	signed long int slong = 123456789L;
	printf("\nsigned long int:\n");
	printf("Value: %ld\n", slong);
	printf("Max: %ld\n", LONG_MAX); //limitd의 상수 사용
	printf("Min: %ld\n", LONG_MIN);


	//unsigned long int 
	unsigned long int ulong = 123456789L;  //unsigned 때문에 숫자 뒤에 U필요
	printf("\nunsigned long int:\n");
	printf("Value: %ld\n", ulong);
	printf("Max: %ld\n", ULONG_MAX); //limitd의 상수 사용

	return 0;
}
