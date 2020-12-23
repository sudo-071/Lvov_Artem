/**

@author Lvov Artem

@date 23-dec-2020

@brief Markdown звіт до переробленого завдання з лабораторної роботи 5

*/

# Звіт до лабораторної роботи 5

## Загальне завдання:

Зробити Markdown звіт для переробленної лабораторної роботи 5, що реалізована за допомогою функції і містить коментарі для можливої генерації Doxygen документації

## Індивідуальне завдання:

Визначити, чи є число простим

## Функція primenum
	/**
	 * @brief Function that defines number is prime or not
	 * @param One integer value
	 * @return 1 or 0
	 */
	
	int primenum (int src)
	{
		int res = 0;						/*defining variable for GF*/
		for (int i = 1; i < src; i++){		/*cycle to calculate the GF*/
			if (src % i == 0){
				res = i;		
			}
		}
		if (res == 1){ 					
			return 1;				/*returning result if the number is prime*/
		}
		else{							
			return 0;				/*returning result if the number is not prime*/
		}
	}

## Функція main
	/**
	 * Main function
	 *
	 * Sequencing:
	 * - check that number is prime or not by calling function @function primenum 
	 * - @return successful returning of program with code (0)
	 */
	
	int main()
	{
		int test_1 = primenum(rand() % 100);	/*test of "primenum()" function*/
	    int test_2 = primenum(13);
	    int test_3 = primenum(42);
		return 0;
	}

## Виведення результату роботи програми

![text](file:///home/o71/Lvov_Artem/Lab_08_09_10/md/output_results/Lab_05_m)

## Блок-схема

![text](file:///home/o71/Lvov_Artem/Lab_08_09_10/md/flowcharts/Lab_05_m)

## Висновок

Була перероблена лабораторна робота 5, яка тепер викликається через функцію, містить коментарі для можливого створення Doxygen документації та має Markdown звіт.
