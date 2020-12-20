int main()
{
	int src = 13;				/*defining the source number*/
	int res = 0;				/*defining variable for GF*/			
	// for (int i = 1; i < src; i++){	/*cycle to calculate the GF (using "for")*/
	// 	if (src % i == 0){
	// 		res = i;		
	//	}
	// }
	
	
	// int i = 1;				/*cycle to calculate the GF (using "while")*/
	// while (i < src){			
	// 	if (src % i ==0){
	// 		res = i;
	// 	}
	// 	i++;
	// }
	
	
	int i = 1;				/*cycle to calculate the GF (using "do...while")*/
	do{					
		if (src % i == 0){
			res = i;
		}
		i++;
	}while (i < src);
	if (res == 1){ 			/*checking that number is prime or not*/
		/*number is prime*/
	}
	return 0;
}
