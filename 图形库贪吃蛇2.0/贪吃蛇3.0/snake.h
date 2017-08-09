#pragma once
#include<graphics.h>
#include<stdio.h>
#include<malloc.h>
#include<windows.h>
#define B 20
#define Wide 22
#define Lenth 22
typedef struct Login {
	char name[10];
	char password[10];
	struct Login *next;
}Login;
typedef struct Snake
{
	int x;
	int y;
	struct Snake *next;
	struct Snake *pre;
}Snake;
typedef struct Food
{
	int x;
	int y;
}Food;
typedef struct Wing {
	int score;
	char name[10];
}Wing;
typedef struct Wall {
	int x;
	int y;
	struct Wall *next;
}Wall;
void SetFood(Snake *head, Food *food);
void InitSnake(Snake *);
void ShowManp(Snake *head, Food *food, int wing, int score, FILE *fp, Wing *user,Wall *wall);
int SnakeEatFood(Snake *, Food *);
void CreatFood(Food *food);
Snake* CreatRear(Snake *);
char GetDirection(char c);
void SnakeMove(Snake *, Snake *, char c);
int JudgeGame(Snake *,Wall *);
int TestFood(Snake *head, Food *food,Wall *wall);
void Loginsystem();
Wall* creatWall();