def getFirstAndLast(array):
  first = ages[0]
  last = ages[-1]
  return first, last

ages = sorted([10, 22, 34, 11, 12, 12, 15, 15, 17, 18, 18, 19, 20])
first, last = getFirstAndLast(ages)
print({ 'first': first, 'last': last })
