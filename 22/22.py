def main():

    names = []
    file = open("names.txt", "r")
    string = file.readline()

    place_1 =0
    place_2 =0
    string = string.replace('"', '')
    names = string.split(',')

    for i,name in enumerate(names):
        highest = name
        high_index = i

        for j in range (i, len(names)):
            if is_higher(names[j],highest):
                highest = names[j]
                high_index = j

        temp = names[i]
        names[i] = highest
        names[high_index] = temp
    for z in names:
        print(z)

    total = 0

    for i,name in enumerate(names):
        total_name = 0
        for j in names[i]:
            total_name += ord(j) - 64
        total += (total_name * (i+1))
    print (str(total))



def is_higher( string_a, string_b ):
    len_a = len(string_a)
    len_b = len(string_b)

    if len_a < len_b:
        for i,char in enumerate(string_a):
            if( char > string_b[i] ):
                return 0
            if( char < string_b[i] ):
                return 1
        return 1

    else:
        for i,char in enumerate(string_b):
            if( char > string_a[i] ):
                return 1
            if( char < string_a[i] ):
                return 0
        return 0



if __name__ == "__main__":
    main()
