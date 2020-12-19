int main()
{
	int src = 13;				/*defining the source number*/
	int res = 0;				/*defining variable for GF*/			
	for (int i = 1; i < src; i++){	/*cycle to calculate the GF (using "for")*/
		if (src % i == 0){
			res = i;		
		}
	}
	if (res == 1){ 			/*checking that number is prime or not*/
		/*number is prime*/
	}
	return 0;
}
