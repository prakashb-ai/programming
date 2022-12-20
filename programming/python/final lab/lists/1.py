date=input('enter the date in mm/dd/yy')
date_list=date.split('/')
month_list=['JAN','FEB','MAR','APRIL','MAY','JUNE','JULY','AUG','SEPT','OCT','NOV','DEC']
print(month_list[int(date_list[0])-1]," ",date_list[1]," ",date_list[2])