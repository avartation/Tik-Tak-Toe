#include"TikTakToe.h"
TikTakToe::TikTakToe()
{
	for (int i = 0; i != 4; i++)
		for (int j = 0; j != 4; j++)
			for (int k = 0; k != 4; k++)
				g[i][j][k] = '.';
}
void TikTakToe::xStep()
{
	int i, j, k;
	std::cout << " 'X' player\n";
	std::cin >> i >> j >> k;
	if (checkEmpty(i, j, k))
		g[i][j][k] = 'X';
	else
	{
		std::cout << "\nThe given spot is not empty, write another coordinates\n";
		xStep();
	}
}
void TikTakToe::oStep()
{
	int i, j, k;
	std::cout << " 'O' player\n";
	std::cin >> i >> j >> k;
	if (checkEmpty(i, j, k))
		g[i][j][k] = 'O';
	else
	{
		std::cout << "\nThe given spot is not empty, write another coordinates\n";
		oStep();
	}
}
bool TikTakToe::checkEmpty(int i, int j, int k)
{
	if (g[i][j][k] == '.')
		return true;
	else
		return false;
}
bool TikTakToe::checkEnd()
{
	for (int i = 0; i != 4; i++)
		for (int j = 0; j != 4; j++)
			if ((g[i][j][0] != '.') && (g[i][j][0] == g[i][j][1]) && (g[i][j][1] == g[i][j][2]) && (g[i][j][2] == g[i][j][3]))
			{
				std::cout << std::setfill('*') << std::setw(15) << '*' << "\n"
					<< "   " << g[i][j][0] << "player wins!!!\n";
				return false;
			}
	for (int i = 0; i != 4; i++)
		for (int k = 0; k != 4; k++)
			if ((g[i][0][k] != '.') && (g[i][0][k] == g[i][1][k]) && (g[i][1][k] == g[i][2][k]) && (g[i][2][k] == g[i][3][k]))
			{
				std::cout << std::setfill('*') << std::setw(15) << '*' << "\n"
					<< "   " << g[i][0][k] << "player wins!!!\n";
				return false;
			}
	for (int j = 0; j != 4; j++)
		for (int k = 0; k != 4; k++)
			if ((g[0][j][k] != '.') && (g[0][j][k] == g[1][j][k]) && (g[1][j][k] == g[2][j][k]) && (g[2][j][k] == g[3][j][k]))
			{
				std::cout << std::setfill('*') << std::setw(15) << '*' << "\n"
					<< "   " << g[0][j][k] << "player wins!!!\n";
				return false;
			}
	for (int i = 0; i != 4; i++)
	{
		if ((g[i][0][0] != '.') && (g[i][0][0] == g[i][1][1]) && (g[i][1][1] == g[i][2][2]) && (g[i][2][2] == g[i][3][3]))
		{
			std::cout << std::setfill('*') << std::setw(15) << '*' << "\n"
				<< "   " << g[i][0][0] << "player wins!!!\n";
			return false;
		}
		if ((g[i][0][3] != '.') && (g[i][0][3] == g[i][1][2]) && (g[i][1][2] == g[i][2][1]) && (g[i][2][1] == g[i][3][0]))
		{
			std::cout << std::setfill('*') << std::setw(15) << '*' << "\n"
				<< "   " << g[i][0][3] << "player wins!!!\n";
			return false;
		}
	}
	for (int j = 0; j != 4; j++)
	{
		if ((g[0][j][0] != '.') && (g[0][j][0] == g[1][j][1]) && (g[1][j][1] == g[2][j][2]) && (g[2][j][2] == g[3][j][3]))
		{
			std::cout << std::setfill('*') << std::setw(15) << '*' << "\n"
				<< "   " << g[0][j][0] << "player wins!!!\n";
			return false;
		}
		if ((g[0][j][3] != '.') && (g[0][j][3] == g[1][j][2]) && (g[1][j][2] == g[2][j][1]) && (g[2][j][1] == g[3][j][0]))
		{
			std::cout << std::setfill('*') << std::setw(15) << '*' << "\n"
				<< "   " << g[0][j][3] << "player wins!!!\n";
			return false;
		}
	}
	for (int k = 0; k != 4; k++)
	{
		if ((g[0][0][k] != '.') && (g[0][0][k] == g[1][1][k]) && (g[1][1][k] == g[2][2][k]) && (g[2][2][k] == g[3][3][k]))
		{
			std::cout << std::setfill('*') << std::setw(15) << '*' << "\n"
				<< "   " << g[0][0][k] << "player wins!!!\n";
			return false;
		}
		if ((g[0][3][k] != '.') && (g[0][3][k] == g[1][2][k]) && (g[1][2][k] == g[2][1][k]) && (g[2][1][k] == g[3][0][k]))
		{
			std::cout << std::setfill('*') << std::setw(15) << '*' << "\n"
				<< "   " << g[0][3][k] << "player wins!!!\n";
			return false;
		}
	}
	if ((g[0][0][0] != '.') && (g[0][0][0] == g[1][1][1]) && (g[1][1][1] == g[2][2][2]) && (g[2][2][2] == g[3][3][3]))
	{
		std::cout << std::setfill('*') << std::setw(15) << '*' << "\n"
			<< "   " << g[0][0][0] << "player wins!!!\n";
		return false;
	}
	if ((g[0][0][3] != '.') && (g[0][0][3] == g[1][1][2]) && (g[1][1][2] == g[2][2][1]) && (g[2][2][1] == g[3][3][0]))
	{
		std::cout << std::setfill('*') << std::setw(15) << '*' << "\n"
			<< "   " << g[0][0][3] << "player wins!!!\n";
		return false;
	}
	if ((g[0][3][0] != '.') && (g[0][3][0] == g[1][2][1]) && (g[1][2][1] == g[2][1][2]) && (g[2][1][2] == g[3][0][3]))
	{
		std::cout << std::setfill('*') << std::setw(15) << '*' << "\n"
			<< "   " << g[0][3][0] << "player wins!!!\n";
		return false;
	}
	if ((g[3][0][0] != '.') && (g[3][0][0] == g[2][1][1]) && (g[2][1][1] == g[1][2][2]) && (g[1][2][2] == g[0][3][3]))
	{
		std::cout << std::setfill('*') << std::setw(15) << '*' << "\n"
			<< "   " << g[3][0][0] << "player wins!!!\n";
		return false;
	}
	return true;
}