#pragma once

const int N = 20;//размер поля
enum state {EMPTY,GRASS,RABBIT,FOX,STATES};//СОСТОЯНИЕ КЛЕТКИ
const int DRAB = 3, DFOX = 6, CYCLES = 5;

class living;
typedef living* world[N][N];

class living//абстрактный класс имеет состояние след ход координаты и определение следующего действия является базовым классом
{
public:
	virtual state who() = 0;
	virtual living* next(world w) = 0;
protected:
	int row, column;
	void sums(world w, int sm[]);
};
