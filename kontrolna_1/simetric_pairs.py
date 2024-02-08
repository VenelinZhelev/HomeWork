def find_symm_arr(arr):
    symm_arr = []
    for i in range(len(arr)):
        for k in range(i+1, len(arr)):
            if arr[i] == arr[k][::-1]:
                symm_arr.append(arr[k])
                symm_arr.append(arr[i])
                break
    return symm_arr

arr = [[3, 4], [1, 2], [5, 2], [7, 10], [4, 3], [2, 5]]
symm_arr = find_symm_arr(arr)
print(symm_arr)
