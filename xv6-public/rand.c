#define SIZE 10

int idx = 0;
unsigned long arr[SIZE];

void set_up_rand(int bound) 
{
	long setup = bound / SIZE;
	for (int i = 0; i < SIZE; i++)
		arr[i] = setup * i + 1;
}

long generate_rand(int max_number) 
{
	long x;
	set_up_rand(max_number);
	idx += 1;
	if(idx >= 10)
		idx = 0;
	x = arr[idx];
	return x;
}
