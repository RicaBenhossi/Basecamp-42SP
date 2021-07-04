void	generate(char k);

void	generate_first_row(int x)
{
	int	inside_columns;

	if (x == 1)
	{
		generate('/');
	}
	else if (x == 2)
	{
		generate('/');
		generate('\\');
	}
	else
	{
		inside_columns = x - 2;
		generate('/');
		while (inside_columns > 0)
		{
			generate('*');
			inside_columns -= 1;
		}
		generate('\\');
	}
}

void	generate_last_row(int x)
{
	int	inside_columns;

	if (x == 1)
	{
		generate('\\');
	}
	else if (x == 2)
	{
		generate('\\');
		generate('/');
	}
	else
	{
		inside_columns = x - 2;
		generate('\\');
		while (inside_columns > 0)
		{
			generate('*');
			inside_columns -= 1;
		}
		generate('/');
	}
}

void	generate_inside_row(int x)
{
	int	inside_columns;

	if (x == 1)
	{
		generate('*');
	}
	else if (x == 2)
	{
		generate('*');
		generate('*');
	}
	else
	{
		inside_columns = x - 2;
		generate('*');
		while (inside_columns > 0)
		{
			generate(' ');
			inside_columns -= 1;
		}
		generate('*');
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
