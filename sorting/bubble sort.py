# bubble sort on python
# https://github.com/cake64/kreisi/blob/main/sorting/bubble%20sort.py

def bubble_sort(h):
    n = len(h)
    for i in range(n-1):
        for j in range(n-i-1):
            if h[j] > h[j + 1]:
                h[j], h[j + 1] = h[j + 1], h[j]


def main():
    # randomize the list
    import random
    random.seed("yeah ok bro")
    a = list(range(50000))

    # sort it
    bubble_sort(a)

    # print it
    print(a)


if __name__ == "__main__":
    main()
