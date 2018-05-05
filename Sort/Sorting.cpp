#include "Sorting.h"
#include "iostream"
using namespace std;

Sorting::Sorting()
{
}


Sorting::~Sorting()
{
}
int Sorting::Bubble(int *a, int n)//冒泡排序 
{
	int i, j, flag, temp, nums = n; //flag为是否发生交换标志
	for (i = n - 1, flag = 1; i > 0 && flag; i--)
	{
		flag = 0;
		for (j = 0; j < i; j++)
			if (a[j] > a[j + 1])
			{
			temp = a[j];
			a[j] = a[j + 1];
			a[j + 1] = temp;
			flag = 1;
			}
	}

	return nums;
}
int Sorting::Di_select(int *a1, int n1)//直接选择排序
{

	int i1, j1, temp1, min1;
	for (i1 = 0; i1<n1 - 1; i1++)
	{
		min1 = i1;
		for (j1 = i1 + 1; j1<n1; j1++)
		{
			if (a1[j1]<a1[min1])
				min1 = j1;
		}
		//exchange
		temp1 = a1[min1];
		a1[min1] = a1[i1];
		a1[i1] = temp1;
	}
	return n1;

}
int Sorting::Di_insert(int *a2, int n2)  //直接插入排序
{/*
	int i3, j3, min3, temp3;
	for (i3 = 0; i3<n2; i3++)
	{
		min3 = a2[i3];
		for (j3 = i3; j3>0; j3--)
		{
			if (min3<a2[j3 - 1])
				a2[j3] = a2[j3 - 1];
			else
				break;
		}
		a2[j3] = min3;
	}

	*/
	int i3, j3, min3, temp3;
	for (i3 = 0; i3<n2; i3++)
	{
		//min3 = a2[i3];
		for (j3 = i3; j3>0&&(a2[j3]<a2[j3-1]); j3--)
		{
			//exchange
			int temp = a2[j3];
			a2[j3] = a2[j3 - 1];
			a2[j3 - 1] = temp;

		}
	//	a2[j3] = min3;
	}
	return 0;

}
int Sorting::Shell(int *a3, int n3)//希尔排序
{
	int i,j,temp;
	int gap = n3;
	while (gap>1)
	{
		gap = gap / 3 + 1;
		for ( i = gap; i <= n3; i++)
		{
			if (a3[i] < a3[i - gap])
			{
				temp = a3[i]; j = i - gap;

				while (j >= 0 && temp < a3[j])
				{
					a3[j + gap] = a3[j];
					j = j - gap;
				}
				a3[j + gap] = temp;
				
			}


		}

	}

	return 0;
}
/*
int Sorting::Heap(int *a4, int n4)//堆排序
{
	int i;
	for (i = n4 / 2 - 1; i >= 0; --i)
		SiftDown(a4, i, n4);
	//从最后一个元素开始对序列进行调整，不断的缩小调整的范围直到第一个元素
	for (i = n4 - 1; i>0; --i)
	{
		//把第一个元素和当前的最后一个元素交换，
		//保证当前的最后一个位置的元素都是在现在的这个序列之中最大的
		a4[i] = a4[0] ^ a4[i];
		a4[0] = a4[0] ^ a4[i];
		a4[i] = a4[0] ^ a4[i];
		//不断缩小调整heap的范围，每一次调整完毕保证第一个元素是当前序列的最大值
		SiftDown(a4, 0, i);
	}

	return 0;
}
void Sorting::SiftDown(int *a5, int start, int m)//形成初始堆
{


	int nChild;
	int nTemp;
	for (; 2 * start + 1<m; start = nChild)
	{
		//子结点的位置=2*（父结点位置）+1
		nChild = 2 * start + 1;
		//得到子结点中较大的结点
		if (nChild<m - 1 && a5[nChild + 1]>a5[nChild])++nChild;
		//如果较大的子结点大于父结点那么把较大的子结点往上移动，替换它的父结点
		if (a5[start]<a5[nChild])
		{
			nTemp = a5[start];
			a5[start] = a5[nChild];
			a5[nChild] = nTemp;
		}
		else break; //否则退出循环
	}

}
*/
int Sorting::partition(int* a6, int lo, int hi)
{
	int i = lo, j = hi + 1; //左右扫描指针
	int v = a6[lo];
	while (true)
	{
		//扫描左右，检查扫描是否结束并交换元素
		while (less(a6[++i], v)) if (i == hi) break;
		while (less(v, a6[--j])) if (j == lo) break;
		if (i >= j) break;
		//exch(a, i, j);
		int temp = a6[i];
		a6[i] = a6[j];
		a6[j] = temp;

	}


	//exch(a, lo, j); //将v=a[j]放入正确位置
	int temp = a6[j];
	a6[j] = a6[lo];
	a6[lo] = temp;

	return j;

}
void Sorting::Quick_sort(int* a6, int lo, int hi)
{
	if (hi <= lo) return;
	int j = partition(a6, lo, hi);
	Quick_sort(a6, lo, j - 1);
	Quick_sort(a6, j + 1, hi);
}

bool Sorting::less(int v, int w)
{
	return v < w ? 1 : 0;

}
void Sorting::sink(int* a5, int k, int n)//下沉
{
	while (2*k<=n)
	{
		int j = 2 * k;
		if (j < n&&less(a5[j-1],a5[j])) j++;
		if (!less(a5[k - 1], a5[j - 1])) break;
		int temp = a5[k-1];
		a5[k - 1] = a5[j - 1];
		a5[j - 1] = temp;
		k = j;
	}
}
void Sorting::HeapSort(int* a5, int n5)//堆排序
{
	for (int k = n5 / 2; k >= 1; k--)  //使堆有序：当一颗二叉树的每个节点都大于等于它的两个子节点时，被称为堆有序。
	{
		sink(a5, k, n5);
	}
	while (n5 > 1)
	{
		int temp = a5[0];
		a5[0] = a5[n5-1];
		a5[n5-1] = temp;
		n5--;
		sink(a5, 1, n5); //下沉排序
	}
}

void Sorting::merge(int* a7, int* aux, int lo, int mid, int hi)
{
	// copy to aux[]
	for (int k = lo; k <= hi; k++) {
		aux[k] = a7[k];
	}

	// merge back to a[]
	int i = lo, j = mid + 1;
	for (int k = lo; k <= hi; k++) {
		if (i > mid)              a7[k] = aux[j++];
		else if (j > hi)               a7[k] = aux[i++];
		else if (less(aux[j], aux[i])) a7[k] = aux[j++];
		else                           a7[k] = aux[i++];
	}
}
void Sorting::Merge_sort1(int* a7, int* aux, int lo, int hi)
{
	if (hi <= lo) return;
	int mid = lo + (hi - lo) / 2;
	//左边排好，右边排
	Merge_sort1(a7, aux, lo, mid);
	Merge_sort1(a7, aux, mid + 1, hi);
	merge(a7, aux, lo, mid, hi);

}
void Sorting::Merge_sort(int* a7,int n)
{
	int* aux = new int[n];
	Merge_sort1(a7, aux, 0, n-1);
}