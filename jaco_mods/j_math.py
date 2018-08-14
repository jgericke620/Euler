import math

def is_abundant(x):
    if ( x < sum(get_factors(x)) ):
        return 1
    return 0

def get_factors(y):
    factors = []
    factors.append(1)
    for i in range(2, int( math.sqrt(y) +1 )):
        if(y%i==0):
            factors.append(i)
            if i != (y/i):
              factors.append(y/i)
    return factors
