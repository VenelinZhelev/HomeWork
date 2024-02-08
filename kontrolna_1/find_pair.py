def sum_of_2(arr, sum):
    for i in range(len(arr)):
        a = arr[i]
        b = sum - a
        for j in range(i+1,len(arr)):
            if arr[j] == b:
                return "the numbers are: " + str(arr[i]) +' and '+ str(arr[j])


arr = [1, 2, 3, 4, 5]
sum = 3
result = sum_of_2(arr, sum)
print(result)