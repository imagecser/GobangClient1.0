#pragma once

void authorize(const char *id, const char *pass);

void gameStart();

void gameOver();

void roundStart(int round);

void oneRound();

void roundOver(int round);

int observe();

void putDown(int row, int col);

void noStep();

void step();

void saveChessBoard();

struct Situ {
	int win;
	int live4;
	int live3;
	int live2;
	int live1;
	int sleep4;
	int sleep3;
	int sleep2;
	int sleep1;
	int die;
	Situ() {
		live1 = 0; live2 = 0; live3 = 0; live4 = 0; sleep4 = 0; 
		sleep3 = 0; sleep2 = 0; sleep1 = 0; win = 0; die = 0;
	}
};

struct Com {
	Situ me;
	Situ op;
};

