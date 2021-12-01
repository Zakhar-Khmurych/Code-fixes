getFirstAndLast = lambda array: (array[0], array[-1])

schoolAges = [10, 12, 15, 15, 22, 12, 7]
studentAges = [17, 18, 18, 19, 20]
ages = schoolAges + studentAges

first, last = getFirstAndLast(sorted(ages))
print(first, last)
