#include"queen.h"
void main()
{
	Queen qeen;
	int a;
	for (int i = 0; i < 4; i++)
	{
		cin >> a;
		qeen.Inqueen(a);
	}
	qeen.Queentraverse();
	system("pause");
}