from decimal import *
import math


def pat(abc):
    pattern = []
    start = 0
    set_test = False
    pattern_detection = False

    for i, num in enumerate(abc):
        if set_test:
            pattern_detection = True
            set_test = False
            temp_place = 0
            # print("PAT")
            # print("\t start at "+str(start) +
            #      "[" + str(abc[start])+"]" + "checking at " + str(i-1)+"[" + str(abc[i-1])+"]")

            for k in range(start, i):

                # print("\t Check " + str(abc[k]) +
                #    " vs " + str(abc[temp_place + i-1]))
                if int(temp_place+i) > len(abc):
                    #print("out of bounds")
                    return -1
                elif abc[k] != abc[temp_place+i-1]:
                    #print("Pattern False")
                    pattern_detection = False
                    break
                temp_place += 1
            if pattern_detection:
                return int(i-(start+1))

        if num in pattern:
            start = pattern.index(num)
            set_test = True
        pattern.append(num)
    return 1


getcontext().prec = 2000
length = 0
value = 0

for i in range(30, 1000):
    temp = str(Decimal(1) / Decimal(i))[2:]

    val = pat(temp)
    if val > length:
        # print("##########")
        # print(i)
        # print(temp)
        #print("Value: "+str(val))
        length = val
        value = i
    # if val == -1:
        #print("Out of bounds for " + str(i))

print("MAX Value: "+str(value))
print(length)
