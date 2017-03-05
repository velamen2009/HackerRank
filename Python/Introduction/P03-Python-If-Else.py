if __name__ == '__main__':
    n = int(input())
    if 0 != n % 2:
        print('Weird')
    elif n >= 2 and n <= 5:
        print('Not Weird')
    elif n >=6 and n <= 20:
        print('Weird')
    else:
        print('Not Weird')
