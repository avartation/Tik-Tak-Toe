#include"TikTakToe.h"
int main()
{
	TikTakToe game;
	std::cout << "\n  Hi there! We are starting,"
		<< "\nFirst will start the 'X' player."
		<< "\n(write coordinates a, b, c)\n\n";
	while (game.checkEnd())
	{
		game.xStep();
		if (game.checkEnd())
			game.oStep();
		else
			break;
	}
	system("pause");
}