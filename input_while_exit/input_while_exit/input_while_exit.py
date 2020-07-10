'''Takes user inputs, check the sentinel, and addes them to a list. Then prints list'''
'''Also give a breakout in the inner while loop'''
n = int(input('Enter a number between 1 and 100 or -99 to stop.'))
list= []
exit = -99
min = 1
max = 100

while n != exit:
	list.append(n)
	while n < min or n > max:
		n = int(input('Enter a number between 1 and 100 or -99 to stop.'))
		if n == -99:
			break
	print(n)
	n = int(input('Enter a number between 1 and 100 or -99 to stop.'))



for nums in list:
	print(nums)
print('Good bye')

# input		expected output		output
# 1,2,3,-99		1,2,3,-99				1,2,3,-99
#	
#

