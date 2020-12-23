/**

@author Lvov Artem

@date 23-dec-2020

@brief Markdown звіт до переробленого завдання з лабораторної роботи 6

*/

# Звіт до лабораторної роботи 6

## Загальне завдання:

Зробити Markdown звіт для переробленної лабораторної роботи 6, що реалізована за допомогою функції і містить коментарі для можливої генерації Doxygen документації

## Індивідуальне завдання:

Генерація нікнейму. В заданому рядку замінити символи:

1. ”a” та ”A” на ”@”;

2. ”o” та ”O” на ”0”;

3. ”i” та ”I” на ”1”;

4. ”s” та ”S” на ”$”;

## Функція nickname
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

## Функція main
	/**
	 * Main function
	 *
	 * Sequencing:
	 * - defining string and changing it to nickname by calling function @function nickname 
	 * - @return successful returning of program with code (0)
	 */
	
	int main()
	{
		char test_1[] = {"Louis Amen"};			
		nickname(test_2);							/*test of "nickname()" function*/
		return 0;
	}

## Виведення результату роботи програми

![text](https://github.com/sudo-071/Lvov_Artem/blob/master/Lab_08_09_10/md/output_results/Lab_06_m.png)

## Блок-схема

![text](https://github.com/sudo-071/Lvov_Artem/blob/master/Lab_08_09_10/md/flowcharts/Lab_06_m.png)

## Висновок

Була перероблена лабораторна робота 6, яка тепер викликається через функцію, містить коментарі для можливого створення Doxygen документації та має Markdown звіт.
