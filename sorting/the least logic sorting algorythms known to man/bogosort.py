"""
BOGOSORT 🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🗣🗣🗣🗣🗣🗣🗣🗣🗣🗣🗣🗣🗣🗣🗣🗣🗣🗣🗣🗣🗣🗣🗣
"""
import random
 
def bogo_sort(h):
    rng = range(0, len(h)-1) # not random number generator
    while any((h[i] > h[i+1]) for i in rng): # check is list sorted
        random.shuffle(h)
 


def main():
    # randomize list
    random.seed("yeah ok bro")
    a = list(range(10))
    random.shuffle(a)

    # sort it
    random.seed(None)
    bogo_sort(a)

    # print it
    print(a)


if __name__ == "__main__":
    main()
