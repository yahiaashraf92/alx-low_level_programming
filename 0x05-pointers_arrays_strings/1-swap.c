/**
 * swap - updates the value of a pointer to 98
 * @a : a pointer to an int
 * @b : another pointer
 * Return: void ALWAYS
 */
void reset_to_98(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;	
}
