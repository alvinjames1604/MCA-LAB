year=int(input("enter a year:"))
if(year % 400==0)and (year %100==0):
	print("{0} is aleap year".format(year))
elif(year % 4==0)and(year %100!=0):
	print("{0} is aleap year".format(year))
else:
	print("{0} is  not a leap year".format(year))
