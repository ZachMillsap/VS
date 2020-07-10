def hourly_employee_input(): # keyword def with function name then ():
    """Prompts the user for name, hours worked, pay, and prints weekly pay"""  # docstring
	name = input("Please enter your name")  # user input string
	hours_worked = int(input("Please enter your hours worked"))  # user input int, possible ValueError
	hourly_pay_rate = float(input("Please enter your hourly pay"))  # user input int, possible ValueError
	weekly_pay()
			return name, " ", weekly_pay," a week "

def weekly_pay():
	"""Accepts parameters"""
	hourly_employee_input()
	weekly_pay = (hours_worked * hourly_pay_rate)
	return weekly_pay 

if __name__ == '__main__':
    try:  # check for ValueError
        display_string = hourly_employee_input()  # function call
		print(display_string)
    except ValueError as err:  
        print("ValueError encountered! ")