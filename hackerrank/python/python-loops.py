if __name__ == '__main__':
    n = int(input())

    nums = [0]*n
    for i in range(n) :
        nums[i]=i*i

    for num in nums:
        print(num)