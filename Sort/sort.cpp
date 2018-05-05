#include "sort.h"
#include "qcombobox.h"
#include "ui_sort.h"
#include "GBK.h"
#include "stdlib.h"
#include "time.h"
//#include "ui_sort.h"
Sort::Sort(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.Sort_box->addItem(GBK::s2q("ð������"));
	ui.Sort_box->addItem(GBK::s2q("ֱ�Ӳ�������"));
	ui.Sort_box->addItem(GBK::s2q("ֱ��ѡ������"));
	ui.Sort_box->addItem(GBK::s2q("ϣ������"));
	ui.Sort_box->addItem(GBK::s2q("������"));
	//��������
	ui.Sort_box->addItem(GBK::s2q("��������"));
	//�鲢����
	ui.Sort_box->addItem(GBK::s2q("�鲢����"));
	connect(ui.Bt_start, SIGNAL(clicked()),
		this,
		SLOT(OnBt_start()));
	connect(ui.Bt_create, SIGNAL(clicked()), this, SLOT(OnBt_create()));
}

Sort::~Sort()
{

}

int Sort::OnBt_start()
{
	clock_t start, finish;
	double totaltime;
	int present_index = ui.Sort_box->currentIndex();

	switch (present_index)
	{

	case 0:
		start = clock();
		My_Sort->Bubble(Number, array_number);
		finish = clock();
		ui.PlainTE_show->setPlainText(GBK::s2q("����ð���������н��Ϊ��") + "\n");
		break;
	case 1:
		start = clock();
		My_Sort->Di_insert(Number, array_number);
		finish = clock();
		ui.PlainTE_show->setPlainText(GBK::s2q("����ֱ�Ӳ����������н��Ϊ��") + "\n");
		break;
	case 2:
		start = clock();
		My_Sort->Di_select(Number, array_number);
		finish = clock();
		ui.PlainTE_show->setPlainText(GBK::s2q("����ֱ��ѡ���������н��Ϊ��") + "\n");
		break;
	case 3:
		start = clock();
		My_Sort->Shell(Number, array_number);
		finish = clock();
		ui.PlainTE_show->setPlainText(GBK::s2q("����ϣ���������н��Ϊ��") + "\n");
		break;
	case 4:
		start = clock();
		My_Sort->HeapSort(Number, array_number);
		finish = clock();
		ui.PlainTE_show->setPlainText(GBK::s2q("�������������н��Ϊ��") + "\n");
		break;
	case 5:
		start = clock();
		My_Sort->Quick_sort(Number, 0,array_number-1);
		finish = clock();
		ui.PlainTE_show->setPlainText(GBK::s2q("���������������н��Ϊ��") + "\n");
		break;
	case 6:
		start = clock();
		My_Sort->Merge_sort(Number, array_number);
		finish = clock();
		ui.PlainTE_show->setPlainText(GBK::s2q("�����鲢�������н��Ϊ��") + "\n");
		break;
	default:
		break;
	}

	totaltime = ((double)(finish - start) / CLOCKS_PER_SEC);
	QString now_str;
	for (int j = 0; j < array_number; j++)
	{
		now_str = ui.PlainTE_show->toPlainText();
		ui.PlainTE_show->setPlainText(now_str + QString::number(Number[j]) + '\t');

	}
	now_str = ui.PlainTE_show->toPlainText();
	//ui.PlainTE_show->setPlainText(now_str +"\n"+GBK::s2q("��������ʱ�䣨\"��\"��") + QString::number(totaltime));


	return 0;

}
int Sort::OnBt_create()
{

	//srand((unsigned int)time(NULL));
	for (int i = 0; i < array_number; i++)
	{
		Number[i] = rand();

	}

	QString now_str;
	ui.PlainTE_analyze->setPlainText(GBK::s2q("ԭʼ����")+"\n");
	for (int j = 0; j < array_number; j++)
	{
		now_str = ui.PlainTE_analyze->toPlainText();
		ui.PlainTE_analyze->setPlainText(now_str+QString::number(Number[j]) + '\t');

	}

	return 0;

}
