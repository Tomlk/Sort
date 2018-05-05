#pragma once
class Sorting
{
public:



	int Bubble(int *a, int n);//冒泡排序 
	int Di_select(int *a1, int n1);//直接选择排序
	int Di_insert(int *a2, int n2);//直接插入排序
	int Shell(int *a3, int n3);//希尔排序
	/*
	旧版堆排序
	int Heap(int *a4, int n4);//堆排序
	void SiftDown(int *a5, int start, int m);//形成初始堆
	*/
	int partition(int* a6,int lo, int hi);
	void Quick_sort(int* a6, int lo, int hi); //快速排序

	void sink(int* a5, int k, int n); //下沉
	void HeapSort(int* a5, int n5);//堆排序
	
	//归并排序（自顶向下）
	void merge(int* a7, int* aux, int lo, int mid, int hi);
	void Merge_sort1(int* a7, int* aux, int lo, int hi);
	void Merge_sort(int* a7,int n);


	bool less(int v, int w);
	//int Number_2[200];//供算法调用的数列
	
	Sorting();
	~Sorting();
};

