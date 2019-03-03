def mmm(array):
  min = 100000000000
  max = -min
  sum = 0
  for i in array:
      if array[i] < min:
          min = array[i]
      if array[i] > max:
          max = array[i]
      sum += array[i]
  mean = sum / len(array)  
  return min, max, mean      

data = [((n % 100)+100) for n in range(0,100000)]
(min, max, mean) = mmm(data)
print("Min = %d, Max = %d, Mean = %.2f\tmmm.py" % (min, max, mean))

