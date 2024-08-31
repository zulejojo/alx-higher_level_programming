#!/usr/binpython3
""" A function that adds 2 integers."""
def add_integer(a, b=98):
    """ returns an interger: the addition og a and b
    a and b must be first casted to integer if they are float
    Raises:
        TypeError: exeption with the message amust be interer or b must be a integer 
    """
    if type(a) is not int and type(a) is not float:
        raise TypeError("a must be an integer")
    elif type(b) is not int and type(b) is not float:
        raise TypeError("b must be an integer")
    else:
        if type(a) is float:
            a = int(a)
        if type(b) is float:
            b = int(a)
        return(a+b)