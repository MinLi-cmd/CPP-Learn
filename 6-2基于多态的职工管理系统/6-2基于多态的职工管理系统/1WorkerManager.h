#pragma once

#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include "0user-typedef.h"
#include "3Employee.h"
#include "4Manager.h"
#include "5Boss.h"

/*==============================������==============================*/
class WorkerManager
{
public:
	WorkerManager(void);		//���캯��

	void Menu_Show(void);		//�˵���ʾ
	void ExitSystem(void);		//�˳�ϵͳ
	void AddEmp(void);			//���ְ��
	void ShowEmp(void);			//��ʾְ��
	void DeleteEmp(void);		//ɾ��ְ��
	void AmendEmp(void);		//�޸�ְ��
	void FindEmp(void);			//����ְ��
	void SortEmp(void);			//����ְ��
	void CleanFile(void);		//���ְ��

	void SaveInFile(void);		//������Ϣ���ļ���
	ULL_int GetEmpNum(void);	//��ȡ�ļ���Ա������
	void InitEmp(void);			//��ʼ��ְ����Ϣ
	int EmpExist(ULL_int Id);	//����Id����ְ���Ƿ����

	~WorkerManager(void);		//��������

	ULL_int m_EmpNum;			//ְ������
	Worker** m_EmpArray;		//ְ������ ����ָ��
	bool FileEmplyFlag;			//�ļ�Ϊ�ձ�־λ true:�ļ�Ϊ�� false
};

/*==============================������������==============================*/
void WMMenuText(const char arr[40], char mod, ULL_int len);//ְ������ϵͳ�˵���ʾ�� ���� ��ӡ
