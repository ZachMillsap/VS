def hourly_employee_input(): # keyword def with function name then ():
    """Prompts the user for name, hours worked, pay, and prints a message"""  # docstring
    name = input("Please enter your name")  # user input string
    hours = int(input("Please enter your hours worked"))  # user input int, possible ValueError
    pay = float(input("Please enter your hourly pay"))  # user input int, possible ValueError
    weekly_pay()
    return str(name) + " " + str(Weekly_pay) + " weekly pay. "

if __name__ == '__main__':
    try:  # check for ValueError
        display_string = get_user_input()
    except ValueError as err:  
        print("ValueError encountered! ") # print the result of the function
    else:
        print(display_string)  # print the result of the function
def weekly_pay(hours,pay):
    hourly_employee_input(hours, pay)
    calculated_pay = hours * pay
    return calculated_pay