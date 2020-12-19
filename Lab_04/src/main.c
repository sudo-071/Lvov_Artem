int main()
{
	double src = 123.656;		/*defining the source number*/	
	int int_part = src;			/*extracting integer part of the number*/		
	int frac_part = (src - int_part) * 1000;	/*extracting fractional part of the number*/
	double result;
	if (int_part != 0){						/*dividing by zero check*/
		double res = ((double)frac_part / (double)int_part);
		int res_2 = res * 100;
		result = res_2 / 100.0;
	}else{
		result = 0;/*Couldn`t divide by zero*/
	}
	return 0;
}
