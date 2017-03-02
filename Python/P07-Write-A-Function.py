s_leap(year):
    leap = False
    
    # Write your logic here
    if 0 == year % 4:
        if 0 != year % 100:
            leap = True
        elif 0 == year % 400:
            leap = True
    
    return leap
