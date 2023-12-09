modded class TimeAndWeatherManagerEntity
{	
	int GetDayIndex(int Day, int Month)
	{
		int Index;
		for (int i = 1; i < Month; i++)
		{
			Index = Index + GetAmountOfDaysInMonth(i);
		}
		Index = Index + Day;
		return Index;
	}
	static int GetAmountOfDaysInMonth(int Month)
	{
		int ammount;
		switch (Month)
		{
			case 1 :
			{
				ammount = 31;
			}
			break;
			case 2:
			{
				ammount = 28;
			}
			break;
			case 3:
			{
				ammount = 31;
			}
			break;
			case 4:
			{
				ammount = 30;
			}
			break;
			case 5:
			{
				ammount = 31;
			}
			break;
			case 6:
			{
				ammount = 30;
			}
			break;
			case 7:
			{
				ammount = 31;
			}
			break;
			case 8:
			{
				ammount = 31;
			}
			break;
			case 9:
			{
				ammount = 30;
			}
			break;
			case 10:
			{
				ammount = 31;
			}
			break;
			case 11:
			{
				ammount = 30;
			}
			break;
			case 12:
			{
				ammount = 31;
			}
			break;
		}
		return ammount;
	}
}