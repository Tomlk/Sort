#pragma once
class Sorting
{
public:



	int Bubble(int *a, int n);//ð������ 
	int Di_select(int *a1, int n1);//ֱ��ѡ������
	int Di_insert(int *a2, int n2);//ֱ�Ӳ�������
	int Shell(int *a3, int n3);//ϣ������
	/*
	�ɰ������
	int Heap(int *a4, int n4);//������
	void SiftDown(int *a5, int start, int m);//�γɳ�ʼ��
	*/
	int partition(int* a6,int lo, int hi);
	void Quick_sort(int* a6, int lo, int hi); //��������

	void sink(int* a5, int k, int n); //�³�
	void HeapSort(int* a5, int n5);//������
	
	//�鲢�����Զ����£�
	void merge(int* a7, int* aux, int lo, int mid, int hi);
	void Merge_sort1(int* a7, int* aux, int lo, int hi);
	void Merge_sort(int* a7,int n);


	bool less(int v, int w);
	//int Number_2[200];//���㷨���õ�����
	
	Sorting();
	~Sorting();
};

