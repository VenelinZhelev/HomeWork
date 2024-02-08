def is_decreasing(arr):
    size= len(arr)
    yes= True
    for i in range(size-1):
        if arr[i] <=arr[i+1]:
            yes=False
            print("False")
            break
    if yes:
        print("True")

is_decreasing([5,4,3,1,1])          