def sumofSquares(n):
	s=0
	for i in range(n+1):
		s+=i**2
	return s
n=int(input("enter n:"))
print("sum of squares of first natural numberas:".format(n),sumofSquares(n))
