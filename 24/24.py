import math


def ceiling(arr, l):
    CI = l+1
    for i in range(l+2, len(arr)):
        if arr[i] > arr[l] and arr[i] < arr[CI]:
            CI = i

    return CI


def find_next(arr):
    for i in range(len(arr)-2, -1, -1):
        if arr[i] < arr[i+1]:
            return i
    return -1


def sort(arr, ind):
    arr1 = arr[:ind]
    arr2 = arr[ind:]
    arr2.sort()
    return arr1+arr2


arr = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
count = 0
test = False

while (not test):
    # print arr
    count += 1
    if count == 1000000:
        print("end =" + str(arr))
        test = True
    index = find_next(arr)
    if (index == -1):
        test = True
    else:
        ceil = ceiling(arr, index)
        arr[index], arr[ceil] = arr[ceil], arr[index]
        arr = sort(arr, index+1)
