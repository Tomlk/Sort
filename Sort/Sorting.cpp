#include "Sorting.h"
#include "iostream"
using namespace std;

Sorting::Sorting()
{
}


Sorting::~Sorting()
{
}
int Sorting::Bubble(int *a, int n)//ð������ 
{
	int i, j, flag, temp, nums = n; //flagΪ�Ƿ���������־
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
int Sorting::Di_select(int *a1, int n1)//ֱ��ѡ������
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
int Sorting::Di_insert(int *a2, int n2)  //ֱ�Ӳ�������
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
int Sorting::Shell(int *a3, int n3)//ϣ������
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
int Sorting::Heap(int *a4, int n4)//������
{
	int i;
	for (i = n4 / 2 - 1; i >= 0; --i)
		SiftDown(a4, i, n4);
	//�����һ��Ԫ�ؿ�ʼ�����н��е��������ϵ���С�����ķ�Χֱ����һ��Ԫ��
	for (i = n4 - 1; i>0; --i)
	{
		//�ѵ�һ��Ԫ�غ͵�ǰ�����һ��Ԫ�ؽ�����
		//��֤��ǰ�����һ��λ�õ�Ԫ�ض��������ڵ��������֮������
		a4[i] = a4[0] ^ a4[i];
		a4[0] = a4[0] ^ a4[i];
		a4[i] = a4[0] ^ a4[i];
		//������С����heap�ķ�Χ��ÿһ�ε�����ϱ�֤��һ��Ԫ���ǵ�ǰ���е����ֵ
		SiftDown(a4, 0, i);
	}

	return 0;
}
void Sorting::SiftDown(int *a5, int start, int m)//�γɳ�ʼ��
{


	int nChild;
	int nTemp;
	for (; 2 * start + 1<m; start = nChild)
	{
		//�ӽ���λ��=2*�������λ�ã�+1
		nChild = 2 * start + 1;
		//�õ��ӽ���нϴ�Ľ��
		if (nChild<m - 1 && a5[nChild + 1]>a5[nChild])++nChild;
		//����ϴ���ӽ����ڸ������ô�ѽϴ���ӽ�������ƶ����滻���ĸ����
		if (a5[start]<a5[nChild])
		{
			nTemp = a5[start];
			a5[start] = a5[nChild];
			a5[nChild] = nTemp;
		}
		else break; //�����˳�ѭ��
	}

}
*/
int Sorting::partition(int* a6, int lo, int hi)
{
	int i = lo, j = hi + 1; //����ɨ��ָ��
	int v = a6[lo];
	while (true)
	{
		//ɨ�����ң����ɨ���Ƿ����������Ԫ��
		while (less(a6[++i], v)) if (i == hi) break;
		while (less(v, a6[--j])) if (j == lo) break;
		if (i >= j) break;
		//exch(a, i, j);
		int temp = a6[i];
		a6[i] = a6[j];
		a6[j] = temp;

	}


	//exch(a, lo, j); //��v=a[j]������ȷλ��
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
void Sorting::sink(int* a5, int k, int n)//�³�
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
void Sorting::HeapSort(int* a5, int n5)//������
{
	for (int k = n5 / 2; k >= 1; k--)  //ʹ�����򣺵�һ�Ŷ�������ÿ���ڵ㶼���ڵ������������ӽڵ�ʱ������Ϊ������
	{
		sink(a5, k, n5);
	}
	while (n5 > 1)
	{
		int temp = a5[0];
		a5[0] = a5[n5-1];
		a5[n5-1] = temp;
		n5--;
		sink(a5, 1, n5); //�³�����
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
	//����źã��ұ���
	Merge_sort1(a7, aux, lo, mid);
	Merge_sort1(a7, aux, mid + 1, hi);
	merge(a7, aux, lo, mid, hi);

}
void Sorting::Merge_sort(int* a7,int n)
{
	int* aux = new int[n];
	Merge_sort1(a7, aux, 0, n-1);
}