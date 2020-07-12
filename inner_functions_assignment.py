
def measurements(a_list):
    a = area(a_list)
    p = perimeter(a_list)
    return "Perimeter = " + str(p) + "Area = " + str(a) # if this is the perimeter and the area
def area(a_list):

    if len(a_list) == 2:
        a = a_list[0] * a_list[1]   #a*b    rectangle
    elif len(a_list) == 1:
        a = a_list[0] * a_list[0]   #a*b    square
    else:
        a = -1
    return a
def perimeter(a_list):
    if len(a_list) == 1:
        p = 2 * (a_list[0] + a_list[1]) # 2*(a+b)
    elif len(a_list) == 1:
            p = 4 * a_list[0]
    else:
        p = -1
    return p
    
    
    

