//#pragma warning (disable:4996)
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//// Gambler's Ruin Simulation
//// ������ ������ �ո��� ������ 1�� ���� �޸��� ������ 1�� �Ҵ´�.
//// �ʱ��ں�(stake)�� ��ǥ��(goal)�� �־�����.
//// ��ǥ�׿� �����ϸ� �̱��, ���� ��� ������ ����.
//// ���ӿ� �̱� Ȯ���� ����ϱ� ���ؼ� �ùķ��̼��� �����Ѵ�. �� ������ T�� �ݺ��Ͽ� �·��� ����Ѵ�.
//// T�� �ʱ��ں�, ��ǥ���� �Է����� �־�����.
//int main()
//{
//	int T, init_stake, stake, goal;
//	int win = 0;
//
//	scanf("%d", &T);
//	scanf("%d", &init_stake);
//	scanf("%d", &goal);
//
//	srand((unsigned int)time(NULL));  // srand �ȿ� �Ź� �ٸ� ���� �� �־���
//
//	for (int i = 0; i < T; i++) {
//		stake = init_stake;
//		while (stake < goal && stake > 0) {  // �̱�ų� ���� ��������
//			int coin = rand() % 2;
//			if (coin == 0) 
//				stake++;
//			else 
//				stake--;
//		}
//		if (stake > 0)
//			win++;
//	}
//
//	printf("%f\n", (double)win/T);
//}