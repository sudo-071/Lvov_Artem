int main()
{
	char src[] = "Ivanov        \0";				/*Defining source string*/
	int src_size = (sizeof(src) - 2);				/*Defining size of array(non-including '\0' symbol*/
	char src_temp[sizeof(src)];					/*Defining array for temporary result*/
	for (int i = 0; i <= sizeof(src_temp); i++){			/*filling cycle for temporary array*/
		src_temp[i] = 0;						
	}
	int spaces = 0;
	for (int i = 0; i < src_size; i++){				/*cycle to find space symbols*/
		if (src[i] == ' '){
			spaces += 1;
		}
	} 
	for (int i = 0; i < src_size; i++){				/*cycle to center the source array and write it to temporary*/
		if (src[i] != ' '){
			src_temp[i + spaces / 2] = src[i];
		}
	}
	for (int i = 0; i < src_size; i++){				/*cycle to fill spaces with filler symbols*/
		if (src_temp[i] == 0){
			src[i] = '_';
		}
		else{							/*wrirting symbols from temporary to main array*/
			src[i] = src_temp[i];
		}	
	}
	return 0;
}

