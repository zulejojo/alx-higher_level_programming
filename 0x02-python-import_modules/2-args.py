#!/usr/bin/python3
if __name__ == "__main__":
    from sys import argv
    x = len(argv) -1
    if x < 1:
        print("{} argumnets.".format(x))
    elif x == 1:
        print("{} argumnets.".format(x))
    else:
        print("{} argumnets.".format(x))

    for i in range(x):
        print("{}:(:s)".format(i +1, argv[i +1]))
