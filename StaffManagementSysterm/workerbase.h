#pragma once
#include<iostream>
#include<stdlib.h>
using namespace std;

//����ְ����
class WorkerBase
{
public:
	//��ʾ������Ϣ
	virtual void showInfo() = 0;
	//��ȡ��λ����
	virtual string getDeptName() = 0;

	int m_Id;//ְ�����
	string m_Name;//ְ������
	int m_DeptId;//ְ�����ڲ������Ʊ��

};

