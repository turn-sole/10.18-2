#include<stdio.h>
//ʵ��һ�������������ð������
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < 9; i++)
//	{
//		for(j = 0; j < 9-i; j++)
//		{
//			if (arr[j]>arr[j+1])
//			{
//			    tmp = arr[j+1];
//				arr[j+1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int arr[n];
//}
//int main()
//{
//	//int arr[3][4] = { 1,2,3,4 };/*��ֻ��ʾ��һ�е�������Ϊ�㡣*/
//	//int arr[3][4] = { {1,2},{4,5} };/*û��Ҫÿ������д����{}��ʾһ�У���0��ʼ��δ�оٳ��Ķ�Ϊ��*/
//	//double arr[][4] = { {2,3},{4,5} };/*��ά��������г�ʼ�����п���ʡ�ԣ��в���ʡ��*/
//	double arr[2][] = { 1,2,3,4 };
//}
void sort(int arr[])
{
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
	    int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 3,1,2,4,6,5,9,7,8,0 };
	sort(arr);
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
//void Sort(int arr[], int sz)
//{
//	//����
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������,������һ��������ж��ٶԱȽ�
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	//��������
//	int arr[] = { 3,1,4,2,9,8,6,7,0,5 };
//	//дһ�������������������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}