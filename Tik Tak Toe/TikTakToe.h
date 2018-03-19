#pragma once
#include<iostream>
#include<iomanip>
class TikTakToe
{
public:
	TikTakToe();
	void xStep();
	void oStep();
	bool checkEnd();
private:
	bool checkEmpty(int, int, int);
	char g[4][4][4];
};