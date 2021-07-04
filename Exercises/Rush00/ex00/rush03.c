void	generate(char k);

void	print_top_bottom_lines(int actual_col, int total_cols)
{
	if (actual_col == 1)
	{
		generate('A');
	}
	else
	{
		if (actual_col == total_cols)
		{
			generate('C');
		}
		else
		{
			generate('B');
		}
	}
}

void	print_middle_lines(int actual_col, int total_cols)
{
	if (actual_col == 1 || actual_col == total_cols)
	{
		generate('B');
	}
	else
	{
		generate(' ');
	}
}

void	rush(int x, int y)
{
	int	counter_col;
	int	counter_line;

	counter_line = 1;
	while (counter_line <= y)
	{
		counter_col = 1;
		while (counter_col <= x)
		{
			if (counter_line == 1 || counter_line == y)
			{
				print_top_bottom_lines(counter_col, x);
			}
			else
			{
				print_middle_lines(counter_col, x);
			}
			counter_col++;
		}
		generate('\n');
		counter_line++;
	}
}
