int _pow_recursion(int x, int y)
{
	int answer = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		answer *= _pow_recursion(x, y - 1);
	}
	return (answer);
}
