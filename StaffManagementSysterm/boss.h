#pragma once
#include <iostream>
using namespace std;
#include "workerbase.h"

//�ϰ���
class Boss :public WorkerBase
{
public:
	Boss(int id, string name, int did);

	//��ʾ������Ϣ
	virtual void showInfo();
	//��ȡ��λ����
	virtual string getDeptName();
};


