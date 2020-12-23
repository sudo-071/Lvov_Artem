/**
 * @mainpage
 * # Main task
 * 1. Create function to define that given number is prime or not.
 *
 * 2. Create function to change defined characters in string to make it a nickname.
 *
 * 3. Create function to define how many number pairs which have the second number bigger than the first are in given number   
 * sequence.
 *
 * @author Lvov A.
 *
 * @date 23-dec-2020
 *
 * @version 1.0
 */
 
/**
 * @file main.c
 * @brief File that demonstrates how functions @function primenum , @function nickname and @function pairs work.
 *
 * @author Lvov A.
 *
 * @date 23-dec-2020
 *
 * @version 1.0
 */

#include <stdarg.h>

int primenum (int src);					/*prototype of "primenum()" function*/
void nickname (char src[]);					/*prototype of "nickname()" function*/
int pairs (int cnt, ...);					/*prototype of "pairs()" function*/

/**
 * Main function
 *
 * Sequencing:
 * - check that number is prime or not by calling function @function primenum 
 * - defining string and changing it to nickname by calling function @function nickname
 * - calculate how many number pairs which have the second number bigger than the first are in given number sequence
 * - @return successful returning of program with code (0)
 */

int main()
{
	int test_1 = primenum(rand() % 100); 			/*test of "primenum()" function*/
	char test_2[] = {"aois AOIS"};			
	nickname(test_2);					/*test of "nickname()" function*/
	int test_3 = pairs (4, 2 ,4 ,6 ,8);			/*test of "pairs()" function*/
	return 0;
}

/**
 * @brief Function that defines number is prime or not
 * @param One integer value
 * @return 1 or 0
 */

int primenum (int src)
{
	int res = 0;						/*defining variable for GF*/
	for (int i = 1; i < src; i++){			/*cycle to calculate the GF*/
		if (src % i == 0){
			res = i;		
		}
	}
	if (res == 1){ 					
		return 1;					/*returning result if the number is prime*/
	}
	else{							
		return 0;					/*returning result if the number is not prime*/
	}
}

/**
 * @brief Function that changes defined symbols in string and turns it into a nickname
 * @param String of symbol array
 * @return Logical reply to console
 */

void nickname (char src[])
{								
	for (int i = 0; i <= sizeof(src); i++){		/*cycle for changing defined characters*/				 
		if (src[i] == 'a' || src[i] == 'A'){
			src[i] = '@';
		}
		else if (src[i] == 'o' || src[i] == 'O'){
			src[i] = '0';
		}
		else if (src[i] == 'i' || src[i] == 'I'){
			src[i] = '1';
		}
		else if (src[i] == 's' || src[i] == 'S'){
			src[i] = '$';
		}
	}
}

/**
 * @brief Function that defines how many number pairs which have the second number bigger than the first are in given number   
 * sequence
 * @param Variative count of integer values (at least 2)
 * @return Integer value
 */

int pairs (const int cnt, ...)
{
	int getres [cnt];					/*defining array for given arguments*/
	int result = 0;					/*defining variable for resulting*/
	va_list list;
	va_start (list, cnt);
	for (int i = 0; i <= cnt; i++){			/*cycle to write arguments into the array*/
		getres [i] = va_arg (list, int);
	}
	va_end (list);
	for (int i = 1; i <= cnt; i++){			/*cycle to count pairs*/
		if (getres [i] < getres [i + 1]){
			result ++;
		}
	}
	if (getres [0] > getres [1]){				/*check to fix result if the first arg is bigger than count*/
		result = result - 1;
	}
	return result;						/*returning result*/
}	
