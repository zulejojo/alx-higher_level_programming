#!/usr/bin/python3
def max_integer(my_list=[]):
        if not my_list:
            return None
        max_value = my_list[0]  # Start with the first element as the maximum
        for num in my_list[1:]:
            if num > max_value:  # Update max_value if a larger number is found
                max_value = num
        return max_value
