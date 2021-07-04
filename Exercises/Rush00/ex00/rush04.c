void	generate(char k);

void	generate_first_row(int x)
{
	int	inside_columns;

	if (x == 1)
	{
		generate('A');
	}
	else if (x == 2)
	{
		generate('A');
		generate('C');
	}
	else
	{
		inside_columns = x - 2;
		generate('A');
		while (inside_columns > 0)
		{
			generate('B');
			inside_columns -= 1;
		}
		generate('C');
	}
}

void	generate_last_row(int x)
{
	int	inside_columns;

	if (x == 1)
	{
		generate('C');
	}
	else if (x == 2)
	{
		generate('C');
		generate('A');
	}
	else
	{
		inside_columns = x - 2;
		generate('C');
		while (inside_columns > 0)
		{
			generate('B');
			inside_columns -= 1;
		}
		generate('A');
	}
}

void	generate_inside_row(int x)
{
	int	inside_columns;

	if (x == 1)
	{
		generate('B');
	}
	else if (x == 2)
	{
		generate('B');
		generate('B');
	}
	else
	{
		inside_columns = x - 2;
		generate('B');
		while (inside_columns > 0)
		{
			generate(' ');
			inside_columns -= 1;
		}
		generate('B');
	}
}

void	display(int x, int y)
{
	int	inside_row;

	inside_row = 1;
	while (inside_row <= y)
	{
		if (inside_row == 1)
		{
			generate_first_row(x);
		}
		else if (inside_row < y)
		{
			generate_inside_row(x);
		}
		else
		{
			generate_last_row(x);
		}
		generate('\n');
		inside_row++;
	}
}

void	rush(int x, int y)
{
	display(x, y);
}
