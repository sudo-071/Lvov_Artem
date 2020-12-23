/**

@author Lvov Artem

@date 23-dec-2020

@brief Markdown звіт до переробленого завдання з лабораторної роботи 7

*/

# Звіт до лабораторної роботи 7

## Загальне завдання:

Зробити Markdown звіт для лабораторної роботи 7, що реалізована за допомогою функції і містить коментарі для можливої генерації Doxygen документації

## Індивідуальне завдання:

Реалізувати функцію, що визначає, скільки серед заданої послідовності чисел таких пар, у котрих перше число менше наступного, використовуючи функцію з варіативною кількістю аргументів

## Функція pairs
	/**
	 * @brief Function that defines how many number pairs which have the second number bigger than the first are in given number
	 * sequence
	 * @param Variative count of integer values (at least 2)
	 * @return Integer value
	 */
	
	int pairs (const int cnt, ...)
	{
		int getres [cnt];						/*defining array for given arguments*/
		int result = 0;							/*defining variable for resulting*/
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
		if (getres [0] > getres [1]){			/*check to fix result if the first arg is bigger than count*/
			result = result - 1;
		}
		return result;							/*returning result*/
	}	

## Функція main
	/**
	 * Main function
	 *
	 * Sequencing:
	* - calculate how many number pairs which have the second number bigger than the first are in given number sequence
	 * - @return successful returning of program with code (0)
	 */
	
	int main()
	{
		int test_3 = pairs (8, 1, 2, 5, 3, 7, 9, 1, 17);			/*test of "pairs()" function*/
		return 0;
	}

## Виведення результату роботи програми

![text](https://github.com/sudo-071/Lvov_Artem/blob/master/Lab_08_09_10/md/output_results/Lab_07_m.png)

## Блок-схема

![text](https://github.com/sudo-071/Lvov_Artem/blob/master/Lab_08_09_10/md/flowcharts/Lab_07_m.png)

## Висновок

Була перероблена лабораторна робота 7, яка тепер містить коментарі для можливого створення Doxygen документації та має Markdown звіт.
