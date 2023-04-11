#include <stdio.h>

void convertTime(int);
int showMenu(void);
void showEnding(void);

int main(void) {
	// �ʱ�ȭ
	int runningTime = 0;

	// �޴������ְ� �ð� �ޱ�, ���ѹݺ�, ����� -1
	while (1) {
		runningTime = showMenu();

		// �������� Ȯ��
		if (runningTime == -1) break;

		// ��ȯ�Ͽ� ���
		convertTime(runningTime);
	}

	showEnding();

	return 0;
}

void convertTime(int time) {
	int hour = time / 60;
	int min = time % 60;
	printf("%d�� %d��\n", hour, min);
}

int showMenu(void) {
	int input;
	printf("���ϴ� �� �Է� (���Ḧ ���ϸ� -1 �Է�) : ");
	scanf_s("%d", &input);
	return input;
}

void showEnding(void) {
	printf("-1 �Է��ϸ� �����˴ϴ�,");

}