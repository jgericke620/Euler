import math
import numpy as np

def add_arr(arr1,arr2,arr3,place):
    carry = 0
    temp = 0

    for i in range(999,999-place,-1):
        #print "#### i = " +str(i)
        temp = arr1[i] + arr2[i] + carry
        carry = temp/10
        arr3[i] = temp%10

    if carry > 0:
        #print "CARRY"
        place += 1
        arr3[i-1] = carry

    return place

#------------------------------------------

arr1 = np.zeros(1000).astype(int)
arr2 = np.zeros(1000).astype(int)
ans = np.zeros(1000).astype(int)

arr1[-1] = 1
arr2[-1] = 1
place = 1
done = False
count = 2

while not done:
    place = add_arr(arr1,arr2,ans,place)
    count += 1
    arr1 = np.array(arr2)
    arr2 = np.array(ans)
    if arr2[0]:
        print count
        done= True

