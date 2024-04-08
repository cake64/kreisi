def shaker_sort(h):
    left = 0
    right = len(h) - 1

    while left <= right:
        for i in range(left, right):
            if h[i] > h[i + 1]:
                h[i], h[i + 1] = h[i + 1], h[i]
        right -= 1

        for i in range(right, left, -1):
            if h[i - 1] > h[i]:
                h[i], h[i - 1] = h[i - 1], h[i]
        left += 1


def main():
    import random
    random.seed("yeah ok bro")
    a = list(range(50000))
    random.shuffle(a)

    # sort it
    shaker_sort(a)

    # print it
    print(a)


if __name__ == "__main__":
    main()
