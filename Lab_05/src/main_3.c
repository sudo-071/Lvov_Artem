int main()
{
	int src = 378123;
	int half_1,half_2,sum_1,sum_2;
	int src_backup = src;
	int temp = 1;
	char res = 'f';
	for ( int i = 0; i < 3 ; i++ ){
		src = src / 10;
		half_1 = src;
	}
	for ( int i = 0; i < 3 ; i++ ){
		temp = temp * 10;
		half_2 = src_backup % temp;
	}
	for ( int i = 0; i < 3 ; i++ ){
		sum_1 = sum_1 + (half_1 % 10);
		half_1 = (half_1 / 10);
	}
	for ( int i = 0; i < 3 ; i++ ){
		sum_2 = sum_2 + (half_2 % 10);
		half_2 = (half_2 / 10);
	}
	if ( sum_1 == sum_2 ){
		res = 's';
	}
	return 0;
}
	
