#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(void)
{
	const uint32_t SALES = 23;			// 售卖价格
	uint32_t money = 0;					// 当前已投入金额

	printf("请投入23元购买\n");

	// 直到投入金额大于售价退出
	while (money < SALES)
	{
		uint32_t ones;
		scanf_s("%" PRIu32 "", &ones);
		
		if (ones == 1 || ones == 2 || ones == 5)
		{
			money += ones;
			if (money < SALES) printf("投入成功，当前已投入 %" PRIu32 "元 ，还需要投入 %" PRIu32 "元\n", money, SALES - money);
		}
		else
		{
			printf("投入失败，面额非1/2/5元\n");
		}
	}

	printf("支付成功，结算余额%" PRIu32 "元\n", money - SALES);

	return 0;
}