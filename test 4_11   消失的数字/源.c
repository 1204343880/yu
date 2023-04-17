int missingNumber(int* nums, int numsSize)
{
	int sum = 0;
	int a = 0;
	while (a < numsSize)
	{

		sum += nums[a];
		a++;

	}

	sum = ((numsSize + 1) * (0 + numsSize)) / 2 - sum;

	return sum;
}