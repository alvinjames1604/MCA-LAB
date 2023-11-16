print("print leap year between two given year")
print("enter start year")
startyear=int(input())
print("enter last year")
endyear=int(input())
print("list of years:")
for year in range(startyear,endyear):
	if(0==year%4)and(0!=year%100)or(0==year%400):
		print(year)
