#include<iostream>
#include<vector>
using namespace std;
class Node
{
private:
	bool state;						//trueΪ��  falseΪ��
	int Number;						//���
public:
	Node(int Number_)							//��ʼ��
	{
		state = false;
		Number = Number_+1;
	}
	void Change()
	{
		state = !state;
	}
	bool Back_State()
	{
		return state;
	}
	int Back_Number()
	{
		return Number;
	}
};
int main()
{
	vector<Node> NodeVector;
	long D, I;
	long show = 0;
	while (1)
	{
		NodeVector.clear();
		cout << "������������ȣ�";
		cin >> D;
		cout << "������С�������";
		cin >> I;
		int Deep = (1 << D) - 1;
		for (int i = 0; i < Deep; i++)
		{
			Node newNode(i);
			NodeVector.push_back(newNode);
		}

		for (int i = 0; i < I; i++)
		{

			long jilu = 0;
			for (int s = 0; s < D - 1; s++)									//�����������
			{
				if (!NodeVector[2 * jilu + 1].Back_State())					//��״̬ Ϊ�ر�ʱ
				{
					NodeVector[2 * jilu + 1].Change();
					jilu = 2 * jilu + 1;
					show = jilu;
				}
				else
				{
					NodeVector[2 * (jilu + 1)].Change();
					jilu = 2 * (jilu + 1);
					show = jilu;
				}
			}
			
		}
		cout <<"��������"<< show + 1<<endl;
	}
	system("pause");
}