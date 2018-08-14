import j_math
import math

def main():
    limit = 28123

    abundant = []
    odd_abundant = []
    none_sum_of_abun = []
    odd_sum = []

    for j in range(2,limit):
        if j_math.is_abundant(j):
                abundant.append(j)
    for i in abundant:
        if i%2 != 0:
            odd_abundant.append(i)

    #print len(abundant)
    #print len(odd_abundant)

    sums = set([])
    values = set([])
    for a in range(1, limit):
      values.add(a)
    abundant_set = set(abundant)

    for i in range(24,limit):
	for j in abundant:
	    if j > i:
		break
            if (i-j) in abundant_set:
		sums.add(i)
		break

    non_sums = values ^ sums
    #print (non_sums)
    print (sum(non_sums))

if __name__ == "__main__":
    main()
