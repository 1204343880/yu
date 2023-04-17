#include<stdio.h>

int main()
{

	int nums[300] = { 0 };
	int k = 0;
	int b = 0;
	int i = 0;
	int c = 0;
	int sum = 0;

	scanf_s("%d", &i);
	for (int a = 0; a < i; a++)
	{
		scanf_s("%d ", &nums[a]);
	}

	scanf_s("%d", &k);


	//这个地方的for循环真是小丑行为    这种转移思想很拉跨     照着这种思想 还需要创造三个新变量来存储这个其中用到的变量
	//for (b = 0; b < k; b++)
	//{
	//	sum = nums[c];
	//	for (int c =i-1 ; c >0; c--)
	//	{
	//		nums[c -1] = nums[c];
	//	}
	//	nums[0] = sum;

	//}

	for (b = 0; b < k; b++)
	{

		for (int c = i - 1; c > 0; c--)
		{
			sum = nums[c - 1] + nums[c];
			nums[c - 1] = sum - nums[c - 1];
			nums[c] = sum - nums[c - 1];

		}

	}

	for (int c = 0; c < i; c++)
	{
		printf("%d ", nums[c]);
	}
}




//
//这下面一快运行太慢，在长数组时候会超时 我真的谢                   这个思路应该是不行。
//
//void rotate(int* nums, int numsSize, int k)
//{
//
//	int b = 0;
//	int sum = 0;
//	for (b = 0; b < k; b++)
//	{
//
//		for (int c = numsSize - 1; c > 0; c--)
//		{
//			sum = nums[c - 1];
//			nums[c - 1] = nums[c];
//			nums[c] = sum;
//
//		}
//
//	}
//
//}
//