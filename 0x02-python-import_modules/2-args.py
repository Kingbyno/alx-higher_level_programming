#!/usr/bin/python3

if __name__ == "__main__":
    """prints the number of and the list of its arguments."""
    import sys

    list_c = len(sys.argv) - 1

    if list_c == 0:
        print("0 arguments.")
    elif list_c == 1:
        print("1 argument:")
    else:
        print("{}: {}".format(list_c))
        for i in range(list_c):
            print("{}: {}".format(i + 1, sys.argv[i + 1]))
