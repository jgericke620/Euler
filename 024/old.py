import math

def permu_gen(abc,place):

    length = len(abc)-1

    if length == place:
        print str(abc)

    else:
        for i in xrange(place,length+1):
            abc[place], abc[i] = abc[i], abc[place]
            permu_gen(abc,place+1)            
            abc[i], abc[place] = abc[place], abc[i]

input = [0, 1, 2, 3 ]
permu_gen(input,0)
